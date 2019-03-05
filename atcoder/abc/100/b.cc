# include <cmath>
# include <iostream>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    int base = pow(100, d);
    int ans = base * n;

    if ((ans / (int)pow(100, d)) % 100 == 0) {
        ans = base * (n+1);
    }
    cout << ans << endl;
    return 0;
}

