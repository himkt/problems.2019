# include <iostream>


using namespace std;


int main() {
    long long n, k; cin >> n >> k;
    long long c1 = n%k;
    long long c2 = abs(c1-k);

    cout << min(c1, c2) << endl;
    return 0;
}
