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
    for (int i=0; i<n-2; i++) {
        if (s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C') ans++;
    }

    cout << ans << endl;
    return 0;
}

