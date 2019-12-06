#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 1001001001001;
    for (long long i=1; i<=sqrt(n); i++) {
        if (n%i != 0) continue;
        long long j = n/i;
        ans = min(ans, i+j-2);
    }

    cout << ans << endl;
    return 0;
}
