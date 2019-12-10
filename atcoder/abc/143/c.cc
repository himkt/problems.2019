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
    string s; cin >> s;

    int ans = 0;
    char prev = '-';
    for (int i=0; i<n; i++) {
        if (prev != s[i]) {
            ans++;
        }
        prev = s[i];
    }

    cout << ans << endl;
    return 0;
}

