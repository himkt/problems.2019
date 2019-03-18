#include <map>
#include <iostream>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, m, k, v; cin >> n >> m;
    map<int, int> counter;

    rep (i, n) {
        cin >> k;
        rep (j, k) {
            cin >> v;
            if (counter.find(v) == counter.end()) {
                counter[v] = 1;
            }
            else { 
                counter[v]++;
            }
        }
    }

    int ans = 0;
    for (auto counter_pair : counter) {
        if (counter_pair.second == n) ans++;
    }
    cout << ans << endl;
    return 0;
}

