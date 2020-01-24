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
    vector<string> s(n);
    vector<int> t(n);

    int ans = 0;
    for (int i=0; i<n; i++) {
        cin >> s[i] >> t[i];
    }

    string key; cin >> key;

    bool calc = false;
    for (int i=0; i<n; i++) {
        if (s[i] == key) {
            calc = true;
            continue;
        }

        if (calc) ans += t[i];
    }

    cout << ans << endl;
    return 0;
}

