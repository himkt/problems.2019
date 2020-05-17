#include <iostream>
#include <map>
#include <vector>

using namespace std;


long long combination_2(long long k) {
    return (k*(k-1))/2;
}


    int main() {
    int n; cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    map<long long, long long> counter;
    for (long long a_i : a) {
        if (counter.find(a_i) == counter.end()) counter[a_i] = 1;
        else counter[a_i]++;
    }

    long long ans = 0;
    for (pair<long long, long long> count: counter) ans += combination_2(count.second);
    for (long long k=0; k < n; k++) cout << ans - (counter[a[k]]-1) << endl;
    return 0;
}
