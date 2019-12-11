#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;


const int MAX = 2000000;
const int MOD = 1000000000 + 7;

long long fac[MAX], finv[MAX], inv[MAX];


void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}


long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


int main() {
    int x, y;
    cin >> x >> y;

    if ((x+y) % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int m = (2*x-y)/3;
    int n = (2*y-x)/3;

    COMinit();
    cout << COM(m+n, m) << endl;

    return 0;
}
