# include <iostream>
# include <set>
# include <vector>


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


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    set<int> ns;
    int gcd_val;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (i == j) continue;
            gcd_val = gcd(a.at(i), a.at(j));
            ns.insert(gcd_val);
        }
    }

    vector<int> na(ns.begin(), ns.end());
    if (na.size() == 1) {
        cout << na.at(0) << endl;
    }
    else {
        cout << na.at(1) << endl;
    }
    return 0;
}

