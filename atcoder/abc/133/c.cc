#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <map>


using namespace std;


int mod(int a, int b) {
    int r = a % b;
    return r < 0 ? r + b : r;
}


int main() {
    long long l, r; cin >> l >> r;
    int ans = 1001001001;

    if (r-l > 2019) {
        ans = 0;
    }
    else {
        for (int i=l; i<r; i++) {
            for (int j=i+1; j<=r; j++) {
                ans = min(ans, (i%2019)*(j%2019)%2019);
            }
        }
    }

    cout << ans << endl;
    return 0;
}

