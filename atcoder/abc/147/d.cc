# include <cmath>
# include <iostream>
# include <vector>


using namespace std;
const long long DIV = 1e9 + 7;


int main() {
    long long n; cin >> n;
    vector<long long> a(n); for (long long i=0; i<n; i++) cin >> a[i];

    long long max_item = -1001001001;
    for (auto item: a) max_item = max(max_item, item);
    if (max_item == 0) {
        cout << 0 << endl;
        return 0;
    }

    long long k = log2(max_item) + 1;
    vector<long long> ct(k, 0);

    for (long long t=0; t<n; t++) {
        for (long long i=k; i>0; i--) {
            if (1 & a[t]>>(i-1)) {
                ct[i-1]++;
            }
        }
    }


    long long ans = 0;
    long long coe = 1;

    for (int i=0; i<k; i++) {
        long long _ans = (ct[i] * (n - ct[i])) % DIV;
        ans += (coe * _ans) % DIV;
        ans %= DIV;
        coe *= 2;
        coe %= DIV;
    }

    ans %= DIV;
    cout << ans << endl;
    return 0;
}

