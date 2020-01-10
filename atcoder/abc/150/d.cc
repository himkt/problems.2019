# include <iostream>
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

int f(int a) {
    int ret = 0;
    while (a%2 == 0) {
        a /= 2;
        ret++;
    }
    return ret;
}


int main() {
    int n, m; cin >> n >> m;

    vector<long long> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        a[i] /= 2;
    }

    int t = f(a[0]);
    for (int i=0; i<n; i++) {
        if (f(a[i]) != t) {
            cout << 0 << endl;
            return 0;
        }
        a[i] >>= t;
    }
    m >>= t;

    long long l = 1;
    for (int i=0; i<n; i++) {
        l = lcm(l, a[i]);
        if (l > m) {
            cout << 0 << endl;
            return 0;
        }
    }

    m /= l;
    cout << (m+1)/2 << endl;
    return 0;
}
