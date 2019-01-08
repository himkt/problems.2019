//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}


template <typename T>
int argmin(vector<T> arr) {
    int min_index = -1;
    double min_val = 1001001001;

    rep (i, arr.size()) {
        if (arr[i] < min_val) {
            min_index = i;
            min_val = arr[i];
        }
    }

    // 1-origin
    return ++min_index;
}


double calc_temperature(int x, int t) {
    return t - x*0.006;
}


int main() {
    int n, t, a;
    cin >> n >> t >> a;

    vector<int> h(n);
    vector<double> b(n);
    rep (i, n) cin >> h[i];
    rep (i, n) b[i] = abs(a - calc_temperature(h[i], t));
    cout << argmin(b) << endl;

    return 0;
}

