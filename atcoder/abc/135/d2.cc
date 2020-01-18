# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


const int MOD = 1e9 + 7;


int main() {
    string s; cin >> s;
    int n_digits = s.size();

    vector<vector<long long>> dp(n_digits+1, vector<long long>(13, 0));
    dp[0][0] = 1;

    for (int i=0; i<n_digits; i++) {
        if (s[i] == '?') {
            for (int j=0; j<13; j++) {
                for (int k=0; k<10; k++) {
                    dp[i+1][((10*j)%13+k)%13] += dp[i][j];
                    dp[i+1][((10*j)%13+k)%13] %= MOD;
                }
            }
        }

        else {
            int k = s[i] - '0';
            for (int j=0; j<13; j++) {
                    dp[i+1][((10*j)%13+k)%13] += dp[i][j];
                    dp[i+1][((10*j)%13+k)%13] %= MOD;
            }
        }

        for (int j=0; j<13; j++) dp[i+1][j] %= MOD;
    }

    cout << dp[n_digits][5] << endl;
    return 0;
}

