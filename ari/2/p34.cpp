#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define all(c) (c).begin(), (c).end()
#define iter(c) __typeof((c).begin())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
 

int a[1<<28];
int n, k;

bool dfs(int i, int sum){

  // n個選んだ
  if (i == n) return sum == k;


  // a[i] を使わない
  if (dfs(i + 1, sum)) return true;

  // a[i] を使う
  if (dfs(i + 1, sum + a[i])) return true;

  return false;
}

int main() {
  cin >> n;

  rep(i, n){
    cin >> a[i];
  }

  cin >> k;

  if (dfs(0, 0)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
