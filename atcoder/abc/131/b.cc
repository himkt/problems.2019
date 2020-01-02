# include <iostream>


using namespace std;


int main () {
    int n, l; cin >> n >> l;
    int apple_pie = 0;
    int min_diff = 1001001001;

    for (int i=1; i<=n; ++i) apple_pie += l+i-1;

    int ans, tmp_apple_pie;
    for (int i=1; i<=n; ++i) {
        tmp_apple_pie = apple_pie - (l+i-1);
        if (abs(apple_pie - tmp_apple_pie) < min_diff) {
            min_diff = abs(apple_pie - tmp_apple_pie);
            ans = tmp_apple_pie;
        }
    }

    cout << ans << endl;
    return 0;
}
