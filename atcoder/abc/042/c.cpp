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

int N, K;

int main() {
  cin >> N >> K;
  vector<int> D;
  D.push_back(-1);

  rep (k, K) {
    int p;
    cin >> p;
    D.push_back(p);
  }

  D.push_back(10);

  vector<int> L;

  int j = 0;

  if (D[1] != 0) {
    L.push_back(0);
  }


  rep (i, D.size()) {
    if (D[i+1] - D[i] > 1) {
      for (int k = D[i]+1; k < D[i+1]; k++) {
        L.push_back(k);
      }
    }
  }

  // 最上位の位について下の値から順番に
  int digit = log10(N);


  // くやちぃ
	// if (L[-2] == int(N / pow(10, digit-1)) % 10) {
	// 	if (L[1] == 0) {
	// 		cout << L[2];
	// 	} else {
	// 		cout << L[1];
	// 	}
  //
	// 	rep (i, digit+1) {
	// 		cout << L[0];
	// 	}
	// 	cout << endl;
	// 	return 0;
	// 	// 負け確定
	// }



  rep (i, digit+1) {
    int k = int(N / pow(10, digit-i)) % 10;

    rep (s, L.size()) {
      if (L[s] == k) {
        cout << L[s];
      } else if (L[s] > k) {
        cout << L[s]; // 勝ち決定
        rep(j, digit - s + 2) {
          cout << L[0];
        }
        cout << endl;
        return 0;
      }
    }
  }
}
