# include <cmath>
# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> v(n), c(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    for (int i=0; i<n; ++i) cin >> c[i];

    int k = pow(2, n);
    int x, y;
    int ans = 0;
    for (int i=0; i<k; ++i) {
        x = 0; y = 0;
        for (int j=0; j<n; ++j) {
            if ((i>>j) & 1) {
                x += v[j];
                y += c[j];
            }
        }
        ans = max(ans, x-y);
    }

    cout << ans << endl;
    return 0;
}

