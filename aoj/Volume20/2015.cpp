# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

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

  template <typename T> pair<T, T> shape(vector<vector<T>> mat) {
    int d1, d2;

    d1 = mat.size();
    if (d1 > 0) d2 = mat[0].size();
    else int d2 = 0;
    cout << "(" << d1 << ", " << d2 << ")" << endl;
    return make_pair(0, 0);
  }

  template <typename T> vector<vector<T>> empty(int n, int m) {
    vector<vector<T>> mat(n, vector<T>(m));
    return mat;
  }
}


vector<int> prime_sieve(int n) {
  int right = sqrt(n) + 1;
  vector<int> prime_table(right+1);
  fill(prime_table.begin(), prime_table.end(), 0);

  rep (i, right) {
    cout << i << ',' << n << endl;
    for (int i=2; i<right; i++) {
      if (n % i == 0) {
        int cnt = 0;
        while (n % i == 0) {
          cnt++;
          n /= i;
        }

        prime_table[i] = cnt;
      }
    }
  }

  int ans = 1;
  if (n != 1) ans *= n;

  for (int i=1; i<right; i++) {
    cout << i << ',' << prime_table[i] << endl;
    if (prime_table[i] > 0) ans *= i;
  }

  cout << ans << endl;
}


int main() {
  int N, M;

  // while (cin >> N >> M && N && M) {
  //   vector<int> H(N);
  //   vector<int> W(M);
  //
  //   rep (i, N) cin >> H[i];
  //   rep (j, M) cin >> W[j];
  //
  //   // utils::print(H);
  //   // utils::print(W);
  //
  //   // prime_sieve(N);
  // }

  prime_sieve(22);
}
