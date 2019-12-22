# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


template <typename integer>
integer _gcd(integer a, integer b) {
    if (b != 0) return _gcd(b, a%b);
    else return a;
}

template <typename integer>
integer gcd (integer a, integer b) {
    if (a > b) return _gcd(a, b);
    return _gcd(b, a);
}

template<typename integer>
integer lcm(integer a, integer b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long a, b; cin >> a >> b;
    cout << lcm(a, b) << endl;   
    return 0;
}

