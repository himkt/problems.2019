#include <iostream>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    string ans = "NO";
    rep (i, a*b) {
        if (i*a % b == c) {
            ans = "YES";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

