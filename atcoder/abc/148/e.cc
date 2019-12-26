# include <iostream>


using namespace std;


int main() {
    long long n; cin >> n;

    if (n % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }

    long long k = 10;
    long long ans = 0;
    while (n >= k) {
        ans += n/k;
        k *= 5;
    }

    cout << ans << endl;
    return 0;
}

