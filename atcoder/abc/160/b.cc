# include <iostream>


using namespace std;


int main() {
    int x; cin >> x;

    int ans = 0;

    while (x >= 500) {
        x -= 500;
        ans += 1000;
    }

    while (x >= 5) {
        x -= 5;
        ans += 5;
    }

    cout << ans << endl;
    return 0;
}

