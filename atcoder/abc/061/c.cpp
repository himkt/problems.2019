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


int main() {
  long long n, k, a, b;
  cin >> n >> k;
  k--;

  vector<long long> arr;
  map<long long, long long> brr;

  rep (i, n) {
    cin >> a >> b;
    if (brr.find(a) != brr.end()) brr[a] += b;
    else brr[a] = b;
  }

  // for (auto i : brr) {
  //   rep (j, i.second) cout << i.first << ' ';
  // }
  // cout << endl;
  // cout << k << endl;

  int pos = 0;
  for (auto i : brr) {
    // cout << pos << endl;
    // cout << pos << " <= " << k << " <= " << pos+i.second << endl;
    if (pos <= k && k <= pos+i.second-1) {
      cout << i.first << endl;
      break;
    }

    // cout << "a_i: " << i.first << endl;
    // cout << "adding: " << i.second << endl;;
    // cout << pos << endl;
    // cout << "--" << endl;
    pos += i.second;
  }
}
