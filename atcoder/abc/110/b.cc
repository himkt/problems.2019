# include <iostream>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, m, _x, _y; cin >> n >> m >> _x >> _y;
    vector<int> x(n); rep (i, n) cin >> x[i];
    vector<int> y(m); rep (i, m) cin >> y[i];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int x_max = max(_x, x.back());
    int y_min = min(_y, y.front());

    if (x_max < y_min) cout << "No War" << endl;
    else cout << "War" << endl;
    return 0;
}

