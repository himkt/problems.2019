# include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int a, b, c, x; cin >> a >> b >> c >> x;
    for (int num_a=0; num_a<=a; ++num_a) {
        for (int num_b=0; num_b<=b; ++num_b) {
            for (int num_c=0; num_c<=c; ++num_c) {
                if (500*num_a+100*num_b+50*num_c == x) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

