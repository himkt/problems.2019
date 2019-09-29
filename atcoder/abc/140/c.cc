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
    vector<int> b(n-1);
    for (int i=0; i<n-1; i++) cin >> b[i];

    //   2    5   B
    //  / \  / \
    //  2  2   5  A
    //
    //
    //
    //   0 153 10 10 23
    //  /\ /\  /\ /\ /\
    //  0 0  10 10 10 23
    int ans = b.at(0) + b.at(n-2);
    for (int i=0; i<n-2; i++) {
        ans += min(b.at(i), b.at(i+1));
    }

    cout << ans << endl;
    return 0;
}

