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

    int ans = 0;
    if (a+1 <= b && a+2 <= c) ans = max(ans, 3*a+3);
    if (b-1 <= a && b+1 <= c) ans = max(ans, 3*b);
    if (c-2 <= a && c-1 <= b) ans = max(ans, 3*c-3);

    cout << ans << endl;
    return 0;
}

