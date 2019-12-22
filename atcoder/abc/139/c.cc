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
    vector<long long> h(n);
    for (int i=0; i<n; i++) cin >> h[i];

    int ans = 0;
    int cur = 0;
    
    for (int i=1; i<n; i++) {
        if (h[i-1] >= h[i]) {
            cur++;
        }
        else {
            ans = max(ans, cur);
            cur = 0;
        }
    }

    ans = max(ans, cur);
    cout << ans << endl;
    return 0;
}

