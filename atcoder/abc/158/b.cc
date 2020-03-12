# include <iostream>


using namespace std;


long long min(long long a, long long b) {
    if (b > a) return a;
    return b;
}


int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long ans = a * (n / (a+b));
    long long rem = n % (a+b);
    ans += min(a, rem);

    cout << ans << endl;
    return 0;
}
