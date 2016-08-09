# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;
int num_i = 0;
int num_s = 0;

struct Node {
  string label;
  int value;

  Node(string l, int v) {
    label = l;
    value = v;
  }
};

void pretty_print(vector<Node> A) {
  cout << A[0].label;
  rep (i, A.size()-1) cout << ' ' << A[i+1].label;
  cout << endl;
}

vector<Node> bsort(vector<Node> A) {
  rep (i, A.size()) {
    for (int j = A.size() - 1; j < i; j--) {
      if (A[j].value < A[j-1].value ) {
        swap(A[j], A[j-1]);
        num_i++;
      }
    }
  }

  return A;
}

vector<Node> ssort(vector<Node> A) {
  rep (i, A.size()) {
    int mini = i;

    for (int j = i; j < A.size(); j++) {
      if (A[j].value < A[j-1].value) {
        mini = j;
      }
    }

    if (i != mini) {
      swap(A[i], A[mini]);
      num_s++;
    }
  }

  return A;
}

int main() {
  map<char, int> dict;
  dict['S'] = 40;
  dict['H'] = 30;
  dict['C'] = 20;
  dict['D'] = 10;

  int N;
  cin >> N;
  vector<Node> A;

  rep (i, N) {
    string in;
    cin >> in;
    int v = dict[in[0]] + ((int)in[1] - '0');
    A.push_back(Node(in, v));
  }

  cout << A[0].label << endl;

  vector<Node> A_b = bsort(A);
  vector<Node> A_s = ssort(A);

  pretty_print(A_b);
  pretty_print(A_s);
}
