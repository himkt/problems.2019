#include <iostream>
#include <cmath>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


int main() {
    int n, m; cin >> n >> m;
    long long ans = pow(2, m) * ((1900*m) + 100*(n-m));
    cout << ans << endl;
    return 0;
}

