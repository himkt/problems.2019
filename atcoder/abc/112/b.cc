# include <iostream>
# include <vector>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, t; cin >> n >> t;
    vector<pair<int, int>> routes(n);

    int _c, _t;
    rep (i, n) {
        cin >> _c >> _t;
        routes[i] = make_pair(_c, _t);
    }

    int idx = 1;
    int cst = 1001001001;

    for (pair<int, int> route: routes) {
        if (route.second <= t and route.first < cst) {
            cst = route.first;
        }
    }

    if (cst != 1001001001) cout << cst << endl;
    else cout << "TLE" << endl;
    return 0;
}

