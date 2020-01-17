# include <iostream>
# include <vector>
# include <string>


using namespace std;


const int N = 13;
const int MOD = 1e9+7;
const int REM = 5;


int main() {
    string s; cin >> s;
    int n_digits = s.size();

    vector<vector<long>> dp(n_digits+1, vector<long>(13, 0));
    dp[0][0] = 1;

    int c;
    for (int i=0; i<n_digits; i++) {
        c = (s[i] == '?') ? -1 : s[i]-'0';

        if (c == -1) {
            for (int j=0; j<10; j++) {
                for (int k=0; k<13; k++) {
                    dp[i+1][(k*10+j)%N] += dp[i][k];
                }
            }
        }

        else {
            for (int k=0; k<13; k++) {
                dp[i+1][(k*10+c)%N] += dp[i][k];
            }
        }

        for (int k=0; k<13; k++) {
            dp[i+1][k] %= MOD;
        }
    }

    cout << dp[n_digits][REM] << endl;
}
