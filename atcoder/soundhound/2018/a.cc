//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a+b == 15) {
        cout << "+" << endl;

    } else if (a*b == 15) {
        cout << "*" << endl;

    } else {
        cout << "x" < <endl;
    }

    return 0;
}

