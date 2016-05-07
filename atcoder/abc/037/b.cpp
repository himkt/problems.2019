
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main() {

  int n, q;
  cin >> n >> q;
  int a[n];
  int l[q], r[q], t[q];
  int ll, rr, tt;

  for (int i = 0; i < n; i++) {
    a[i] = 0;
  }

  for (int i = 0; i < q; i++) {
    cin >> ll >> rr >> tt;
    l[i] = ll;
    r[i] = rr;
    t[i] = tt;
  }

  for (int i = 0; i < q; i++) {
    // a[l[i]-1] = t[i];
    // a[r[i]-1] = t[i];

    for (int j = l[i]-1; j < r[i]; j++){
      a[j] = t[i];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}
