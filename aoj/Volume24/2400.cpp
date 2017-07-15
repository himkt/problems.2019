# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

class team {
  public:
    long long tid;
    long long correct;
    long long penalty;
    void print();
    bool operator < (const team&);
};

void team::print() {
  cout << tid << ' ' << correct << ' ' << penalty << endl;
}

bool team::operator < (const team &right) {
  if (correct != right.correct) return correct < right.correct;
  else if (penalty != right.penalty) return penalty > right.penalty;
  else return tid > right.tid;
}

int main() {
  long long t, p, r;
  long long tid, pid, time_;
  long long point;
  string message;

  while (cin >> t >> p >> r && t && p && r) {
    vector<team> teams(t);
    vector<long long> corrects(t, 0);
    vector<long long> penalties(t, 0);
    vector<vector<long long>> wrongs(t);
    rep (i, t) wrongs[i].resize(p);

    rep (i, r) {
      cin >> tid >> pid >> time_ >> message;
      tid--; pid--;

      if (message == "CORRECT") {
        corrects[tid]++;
        point = wrongs[tid][pid] * 1200 + time_;
        // cout << "team id: " << tid << endl;
        // cout << "penalty: " << penalties[tid] << endl;
        // cout << "wrongs[tid][pid]: " << wrongs[tid][pid] << endl;
        // cout << "point: " << point << endl;
        penalties[tid] += point;
      }
      else if (message == "WRONG") {
        wrongs[tid][pid]++;
      }
    }

    rep (i, t) {
      teams[i].tid = i+1;
      teams[i].correct = corrects[i];
      teams[i].penalty = penalties[i];
    }

    sort(teams.begin(), teams.end());
    reverse(teams.begin(), teams.end());
    rep (i, t) teams[i].print();
  }
}
