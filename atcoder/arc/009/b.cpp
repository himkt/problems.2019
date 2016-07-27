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

int index(vector<int> arr, int target) {
  rep (i, arr.size()) if (arr[i] == target) return i;
  return -1;
}

int pow(int n, int k) {
  int res = n;
  rep (i, k - 1) res *= n;
  return res;
}

pair<int, int> compare(int a, int b, vector<int> order) {
  double num_a = log10(a);
  int digit_a = num_a + 1;

  double num_b = log10(b);
  int digit_b = num_b + 1;

  if (digit_a > digit_b) {
    return make_pair(a, b);
  }
  else if (digit_b > digit_a) {
    return make_pair(b, a);
  }

  // 桁ごとに比較していく
  // 上から比較して決着したタイミングでreturnすれば良い

  for (int i = digit_a; i >= 0; i--) {

    // n桁目の数が取れていない (今は上位n桁の数が取れてしまっている)
    int num_a_k = a / pow(10, i-1) % pow(10, i-1);
    int num_b_k = b / pow(10, i-1) % pow(10, i-1);

    // vector<int> aで定義されている数値ごとの順序関係で比較
    // a.find(1), a.find(2) で比較するとかすると良さそう
    if (index(order, num_a_k) > index(order, num_b_k)) {
      return make_pair(a, b);
    }
    else if (index(order, num_b_k) > index(order, num_a_k)) {
      return make_pair(b, a);
    }
  }

  return make_pair(a, b);
}

vector<int> sort(vector<int> a, vector<int> order) {
  vector<int> res = a;

  rep (i, res.size()-1) {
    for (int j = res.size() - 1; j > i; j--) {
      pair<int, int> ab = compare(res[j-1], res[j], order);
      res[j-1] = ab.first;
      res[j] = ab.second;
    }
  }

  return res;
}

int main() {
  int N;
  vector<int> order(10);
  rep (i, 10) cin >> order[i];

  cin >> N;

  vector<int> a(N);
  rep (i, N) cin >> a[i];

  vector<int> res = sort(a, order);
 
  rep (i, res.size()) {
    cout << res[res.size() - i - 1] << endl;
  }
}
