# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    // n = x * 1.08 => x = n / 1.08

    if (100*n % 108 == 0) {
        cout << n / 1.08 << endl;
    }
    else {
        int x = (n/1.08)+0.5;
        int d = x*1.08;
        int e = (x+1)*1.08;
        if (d == n) cout << x << endl;
        else if (e == n) cout << x+1 << endl;
        else cout << ":(" << endl;
    }
    return 0;
}
