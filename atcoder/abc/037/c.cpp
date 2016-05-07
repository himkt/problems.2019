
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main() {

  int n, k;
  cin >> n >> k;
  int a[n];
  long long ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    if (i + k - 1 < n) {
      for (int j = 0; j < k; j++) {
        ans += a[i+j];
      }
    }
  }

  cout << ans << endl;
}
