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

  while (getline(cin, sentence)) {
    if (sentence == ".") {
      break;
    }
    int position = 0;

    stack<char> a;
    a.push('B');

    rep (i, sentence.size()) {
      if (sentence[i] == '(') a.push(sentence[i]);
      if (sentence[i] == '[') a.push(sentence[i]);

      if (sentence[i] == ')') {
        if ('(' == a.top()) a.pop();
        else {
          a.push('B');
        }
      }
      if (sentence[i] == ']') {
        if ('[' == a.top()) a.pop();
        else {
          a.push('B');
        }
      }
    }

    cout << (a.size() == 1 ? "yes" : "no") << endl;
  }
}
