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

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}

int main() {
  string sentence;

  while (getline(cin, sentence) && sentence != ".") {
    cout << sentence << endl;
    int position = 0;

    int state = 1;
    int ans = 0;
    while (position >= 0 && sentence.size() > position) {
    // cout << sentence << endl;

      if (state == 1 && sentence[position] == ')') {
        sentence[position] = '@';
        state = -1;
      } else if (state == -1 && sentence[position] == '(') {
        sentence[position] = '@';
        state = 1;
      }

      position += state;
    }
    ans += state;

    position = 0;
    state = 1;
    while (position >= 0 && sentence.size() > position) {
    // cout << sentence << endl;

      if (state == 1 && sentence[position] == ']') {
        sentence[position] = '@';
        state = -1;
      } else if (state == -1 && sentence[position] == '[') {
        sentence[position] = '@';
        state = 1;
      }

      position += state;
    }
    ans += state;
    // cout << sentence << endl;

    cout << ans << endl;
  }
}
