//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (b - a == c - b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

