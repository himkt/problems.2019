# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    int ans = n;
    int cur = 1;
    bool constructable = false;
    for (int i=0; i<n; i++) {
        if (a[i] == cur) {
            cur++;
            ans--;
            constructable = true;
        }
    }

    if (constructable) cout << ans << endl;
    else cout << "-1" << endl;

    return 0;
}

