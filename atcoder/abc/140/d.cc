# include <iostream>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> spans;

    int ans = 0;
    for (int i=1; i<n; i++) {
        if (s[i-1] == s[i]) ans++;
    }

    cout << min(ans+2*k, n-1) << endl;
    return 0;
}

