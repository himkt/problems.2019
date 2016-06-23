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
typedef pair<int, int> P;

const int INF = 1001001001;

int x, y, s;

void solve(int x, int y, int s) {
  double ans = 0;
  double a,b,a1,b1,a2,b2;
  int d;
  set<int> ary;
  d = s/(100+x);
  FOR (i, 0, d) {
    ary.insert((i+1)*(100+x)/100);
  }
  for(auto j : ary){
    cout << j << endl;
    if(j>=s){
      break;
    }
    
    auto e = ary.find(s-j);
    if(e != ary.end()) {
      a1=j;
      b1=*e;
      cout << a1 << b1 << endl;
      a2=floor(a1*(100+y)/100);
      b2=floor(b1*(100+y)/100);
      if (ans <= a2+b2) ans = a2+b2;
    }
  }

  cout << int(ans) << endl;
}

int main() {
  while (cin >> x >> y >> s) {
    solve(x, y, s);
  }
}
