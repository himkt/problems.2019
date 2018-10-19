//#define _GRIBCXX_DEBUG
#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int n;
    vector<int> a;

    cin >> n;
    a.resize(n);
    fill(a.begin(), a.end(), 0);
    rep (i, n) cin >> a[i];

    int k = 0;
    rep (i, n-1) {
        k = max(__lcm(a[i], a[i+1]));
    }
    return 0;
}

