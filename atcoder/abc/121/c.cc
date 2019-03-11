#include <algorithm>
#include <iostream>
#include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

bool less_than(pair<long long, long long> &a, pair<long long, long long> &b) {
    return a.second < b.second;
}

int main() {
    long long n, m; cin >> n >> m;
    vector<long long> a(n), b(n);
    rep (i, n) cin >> a[i] >> b[i];

    vector<pair<long long, long long>> ca(n), cb(n);
    rep (i, n) ca[i] = make_pair(a[i], a[i]);
    rep (i, n) cb[i] = make_pair(b[i], a[i]);

    sort(ca.begin(), ca.end(), less_than);
    sort(cb.begin(), cb.end(), less_than);

    long long ans = 0;
    long long ttl = m;

    rep (i, n) {
        // num: Number of drinks what I can buy
        //
        // ideal: m
        // real: cb[i].first
        long long num = min(ttl, cb[i].first);
        long long prc = num * ca[i].first;

        ans += prc;
        ttl -= num;
    }

    cout << ans << endl;
    return 0;
}

