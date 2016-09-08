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
int cnt = 0;

void insertSort(vector<int> A, int n, int g) {
  for (int i = g; i < n; i++) {
    int v = A[i];
    int j = i - g;

    while (j >= 0 && A[j] > v) {
      A[j+g] = A[j];
      j -= g;
      cnt++;
    }
    A[j+g] = v;
  }
}

void shellSort(vector<int> A, int n) {
  cnt = 0;
  int m = n;
  vector<int> G(m);
  rep (i, m) G[i] = 0;

  rep (i, m) {
    insertSort(A, n, G[i]);
  }
}


int main() {
  int n; cin >> n;
  vector<int> A(n);

  rep (i, n) cin >> A[i];

  cout << m << endl;

  cout << A[0];
  rep (i, A.size()-1) cout << ' ' << A[i+1];
  cout << endl;

  cout << cnt << endl;
}
