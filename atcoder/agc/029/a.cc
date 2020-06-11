# include <iostream>
# include <string>

using namespace std;


int main () {
    string s;
    cin >> s;

    int nb = 0;
    long long ans = 0;

    for (char c: s) {
        if (c == 'W') {
            ans += nb;
        }
        else {
            nb++;
        }
    }
    cout << ans << endl;
}
