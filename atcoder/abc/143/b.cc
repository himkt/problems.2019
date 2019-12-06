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
    vector<int> d(n);
    for (int i=0; i<n; i++) cin >> d[i];

    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == j) continue;
                ans += d[i]*d[j];
        }
    }

    cout << ans / 2 << endl;
    return 0;
}

