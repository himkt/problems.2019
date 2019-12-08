# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


vector<int> int2bits(int i, int n) {
    vector<int> bits(n, 0);
    for (int k=0; k<n; k++) {
        if (i>>k & 1) bits[k] = 1;
    }
    return bits;
}


int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> x(n);
    vector<vector<int>> y(n);

    for (int i=0; i<n; i++) {
        cin >> a[i];
        x[i].resize(a[i]);
        y[i].resize(a[i]);
        for (int j=0; j<a[i]; j++) {
            cin >> x[i][j] >> y[i][j];
            x[i][j]--;
        }
    }

    int ans = 0;

    for (int i=0; i<(int)pow(2, n); i++) {
        vector<int> cand = int2bits(i, n);

        vector<int> type(n);
        for (int k=0; k<n; k++) {
            type[k] = cand[k];
        }

        // cand が定まったときのシミュレーション
        // cout << "cand: ";
        // for (auto elem: cand) cout << elem << ' '; cout << endl;

        int invalid = 0;
        for (int k=0; k<n; k++) {

            if (!cand[k]) continue;

            for (int j=0; j<a[k]; j++) {
                if (type[x[k][j]] != y[k][j]) {
                    invalid = 1;
                    // cout << k << ", " << j << endl;
                    break;
                }
            }
        }

        // cout << "invalid: " << invalid << endl;
        if (invalid) continue;
        // cout << "cand: ";
        // for (auto elem: cand) cout << elem << ' ';
        // cout << endl;
        int n_ones = 0;
        for (auto elem: cand) if (elem) n_ones++;
        // cout << "-> " << n_ones << endl;
        ans = max(ans, n_ones);
        // cout << n_ones << endl;
    }

    cout << ans << endl;
    return 0;
}

