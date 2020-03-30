# include <iostream>
# include <vector>


using namespace std;


int main() {
    int k, n; cin >> k >> n;
    vector<long long> a(n); for (int i=0; i<n; i++) cin >> a[i];
    vector<long long> d(n); for (int i=0; i<n-1; i++) d[i] = a[i+1] - a[i];
    d[n-1] = k - a[n-1] + a[0];

    long long ans = 0;
    long long _max = 0;

    for (int d_i: d) {
        _max = _max > d_i ? _max : d_i;
        ans += d_i;
    }

    ans -= _max;
    cout << ans << endl;
    return 0;
}

