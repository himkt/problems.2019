# include <iostream>
# include <string>
# include <vector>


using namespace std;


const int MOD = 1e9+7;


int main() {
    string s; cin >> s;

    int n_digits = s.size();

    vector<vector<long long>> dp(n_digits+1, vector<long long>(13, 0));
    dp[0][0] = 1;  // 0 (mod 13) \equiv 0

    long long digit = 1;
    for (int i=0; i<n_digits; i++) {

        // update dp[i+1][k]
        if (s[n_digits-i-1] != '?') {
            int k = s[n_digits-i-1] - '0';
            for (int j=0; j<13; j++) {
                dp[i+1][(digit*k+j)%13] += dp[i][j];
            }
        }

        else {
            for (int k=0; k<10; k++) {
                for (int j=0; j<13; j++) {
                    dp[i+1][(digit*k+j)%13] += dp[i][j];
                }
            }
        }

        for (int k=0; k<13; k++) dp[i+1][k] %= MOD;
        digit *= 10;
        digit %= 13;
    }

    cout << dp[n_digits][5] << endl;
    return 0;
}

