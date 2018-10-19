//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    int n, k;
    cin >> n >> k;

    // 10/4 -> あまり2だがそれらは適当な2人に配れば良い
    cout << (n%k!=0) << endl;
    return 0;
}

