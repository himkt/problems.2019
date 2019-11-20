# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>
# include <algorithm>
# include <iomanip>


using namespace std;


long double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}


int main() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    for (int i=0; i<n; i++) cin >> x[i] >> y[i];

    vector<int> z(n); for(int i=0; i<n; i++) z[i] = i;

    long double ans = 0.0;
    long long   dnm = 0;

    do {
        long double _ans = 0.0;
        for (int j=0; j<n-1; j++) {
            int _i = z[j];
            int _j = z[j+1];
            _ans += distance(x[_i], y[_i], x[_j], y[_j]);
        }
        ans += _ans;
        dnm++;
    } while (next_permutation(z.begin(), z.end()));

    cout << setprecision(12) << ans / dnm << endl;
    return 0;
}

