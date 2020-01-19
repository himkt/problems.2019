# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;

    vector<pair<int, int>> ps(n);
    int x, l;

    for (int i=0; i<n; i++) {
        cin >> x >> l;
        ps[i] = make_pair(x+l, x-l);
    }

    sort(ps.begin(), ps.end());

    int ans = 0;
    int cur = -1001001001;

    for (auto p: ps) {
        if (cur <= p.second) {
            cur = p.first;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

