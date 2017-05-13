# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

// namespace utils
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
// end namespace utils
}

class RangeEncoding {
  public:
    int minRanges(vector<int> arr);
};

int RangeEncoding::minRanges(vector<int> arr) {
  int ans = 1;
  int prev_elem = arr[0];

  rep (i, arr.size()-1) {
    if (arr[i+1] - prev_elem > 1) ans++;
    prev_elem = arr[i+1];
  }

  return ans;
}

int main() {
  vector<int> test1 = {2, 3, 5, 7};
  cout << RangeEncoding().minRanges(test1) << endl;
}
