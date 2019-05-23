# include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int ans = 1001001001;

    for (int i=0; i<s.length()-2; i++) {
        ans = min(ans, abs(753 - stoi(s.substr(i, 3))));
    }

    cout << ans << endl;
    return 0;
}

