# include <algorithm>
# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);

    int ai;
    for (int i=0; i<n; i++) {
        cin >> ai;
        a[i] = make_pair(ai, i);
    }

    sort(a.begin(), a.end());
    for (auto e: a) cout << e.second+1 << ' '; cout << endl;

    return 0;
}

