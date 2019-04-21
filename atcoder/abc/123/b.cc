# include <iostream>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


vector<int> dishes(5);


int min(vector<int> indices) {
    int ans = 0;
    rep (i, 5) {
        if (ans % 10 != 0) ans += (10-(ans%10));
        ans += dishes[indices[i]];
    }
    return ans;
}


int main() {
    int ans = 1001001001;

    vector<int> indices = {0, 1, 2, 3, 4};
    rep (i, 5) cin >> dishes[i];

    sort(indices.begin(), indices.end());
    do {
        ans = min(ans, min(indices));
    } while (next_permutation(indices.begin(), indices.end()));

    cout << ans << endl;
    return 0;
}

