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

// %% NOTE : begin matrix %%
typedef vector<int> vec;
typedef vector<vec> mat;

void pretty_print(mat g) {
  rep (i, g.size()) {
    rep (j, g[0].size()-1) {
      cout << g[i][j] << ' ';
    }
    cout << g[i][g[0].size()-1] << endl;
  }
}

mat mul(mat A, mat B) {
  mat C(A.size(), vec(B.size()));
  rep (i, A.size()) {
    rep (k, B.size()) {
      rep (j, B[0].size()) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}
// %% NOTE : end matrix %%


int n;

// NOTE : 0を埋めておくことで67行目あたりの処理が自然にできる
int month_day [] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int holiday [370];

int main() {
  cin >> n;
  vector<int> v(n);

  rep (i, n) {
    int m,d;
    char c;
    cin >> m >> c >> d;

    // NOTE : convert m/d into scalar(index)
    for(int i = 1;i < m;i++){
      d += month_day[i];
    }

    holiday[d]++;
  }

  for(int i = 1;i <= 366;i++){
    if(i % 7 == 0 || i % 7 == 1){
      holiday [i]++;
    }
  }


  int ans = 0,cnt = 0;
  for(int i = 1;i <= 366;i++){
    if(holiday [i]){
      cnt++;
      holiday [i + 1] += holiday [i] - 1;
    }
    else{
      cnt = 0;
    }
    ans = max(cnt,ans);
  }

  cout << ans << endl;
}
