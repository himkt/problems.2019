# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    string s; cin >> s;
    string ss = s;
    reverse(ss.begin(), ss.end());

    int ans = 0;
    for (int i=0; i<s.size(); i++) {
        if (s[i] != ss[i]) ans++;
    }

    cout << ans/2 << endl;
    return 0;
}

