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
#define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define tr(c, i) for (iter(c) i = (c).begin(); i != (c).end(); ++i)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)


const int MAX_N = 100000;
int N, S[MAX_N], T[MAX_N];
pair<int, int> tasks[MAX_N];
int ans = 0;

int main() {
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);

	cin >> N;

	rep(i, 5) {
    cin >> S[i];
	}

	rep(i, 5) {
    cin >> T[i];
	}

  rep(i, 5) {
    tasks[i].first = T[i];
    tasks[i].second = S[i];
  }

  // sort :: Array :: Array + Int -> Array
  sort(tasks, tasks + N);

  int ans = 0, t = 0;

  rep(i, N) {
    if (t < tasks[i].second) {
      ans++;
      t = tasks[i].first;
    }
  }

  cout << ans << endl;
}
