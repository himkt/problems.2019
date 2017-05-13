# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

// namespace utils
namespace utils{
  template <typename T> void print(vector<vector<T>> mat) {
    rep (i, mat.size()) {
      rep (j, mat[0].size()) cout << mat[i][j] << ' ';
      cout << endl;
    }
  }

  template <typename T> void print(vector<T> v) {
    rep (i, v.size()) cout << v[i] << ' ';
    cout << endl;
  }
// end namespace utils
}

class RemovingParenthesis {
  public:
    int ans = 0;
    int countWays(string);
    void dfs(string, int, int);
};

void RemovingParenthesis::dfs(string s, int i, int j) {

  for (int ii = 0; ii<s.size(); ii++) {
    if (s[ii]=='(') {
      s[ii] = '.';

      for (int jj=j; jj<s.size(); jj++) {
        string ss = s;
        if (ss[jj] == ')') {
          ss[jj] = '.';
          cout << ss << endl;

          dfs(ss, ii, jj);
        }
      }
    }
  }
}

int RemovingParenthesis::countWays(string s) {
  int len_s = s.size();
  RemovingParenthesis::dfs(s, 0, 0);
  return ans;
}


int main() {
  string s = "(())";
  // string s = "(())(())(())";
  cout << RemovingParenthesis().countWays(s) << endl;
}
