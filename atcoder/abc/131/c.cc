# include <iostream>


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


int main () {
    long long a, b, c, d; cin >> a >> b >> c >> d;

    long long na = a - ((a/c) + (a/d) - (a/lcm(c, d)));
    long long nb = b - ((b/c) + (b/d) - (b/lcm(c, d)));

    long long ans = nb - na;
    if (a % c != 0 and a % d != 0) ans++;
    cout << ans << endl;
}
