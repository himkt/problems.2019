# include <cmath>
# include <iostream>
# include <vector>


using namespace std;
const long long DIV = 10e8 + 7;


int main() {
    long long n; cin >> n;
    vector<long long> a(n); for (long long i=0; i<n; i++) cin >> a[i];

    long long max_item = -1001001001;
    for (auto item: a) max_item = max(max_item, item);
    if (max_item == 0) {
        cout << 0 << endl;
        return 0;
    }

    long long k = (int)log2(max_item) + 1;

    vector<vector<long long>> ct(k);
    for (int i=0; i<k; i++) ct[i] = vector<long long>(2, 0);

    for (long long t=0; t<n; t++) {
        long long a_t = a[t];

        for (long long i=k; i>0; i--) {
            if (1 & a_t>>(i-1)) {
                ct[i-1][1]++;
            }
            else {
                ct[i-1][0]++;
            }
        }
    }

    long long ans = 0;
    for (long long t=k-1; t>=0; t--) {
        ans += ((long long)pow(2, t) * ct[t][0] * ct[t][1] % DIV);
    }

    ans %= DIV;
    cout << ans << endl;
    return 0;
}

