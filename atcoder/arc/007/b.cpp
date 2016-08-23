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
int n, m;
 
 
int index(vector<int> case_disk, int disk) {
  rep (i, case_disk.size()) {
    if (case_disk[i] == disk) return i;
  }
  return -1;
}
 
 
int main() {
  cin >> n >> m;
  vector<int> disk(m);
  vector<int> case_disk(n);
 
  rep (i, m) cin >> disk[i];
  rep (i, n) case_disk[i] = i + 1;
 
  int current = 0;
 
  rep (i, m) {
    int next_disk = disk[i];
    if (next_disk == current) continue;
 
    int disk_index = index(case_disk, next_disk);
    int tmp = case_disk[disk_index];
    case_disk[disk_index] = current;
    current = tmp;
  }
 
  rep (i, n) {
    cout << case_disk[i] << endl;
  }
}
