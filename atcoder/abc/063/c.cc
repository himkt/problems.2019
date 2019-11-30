# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> scores(n); for (int i=0; i<n; ++i) cin >> scores[i];
    sort(scores.begin(), scores.end());

    int sum = 0; for (int score: scores) sum += score;
    if (sum % 10 != 0) {
        cout << sum << endl;
        return 0;
    }

    vector<bool> dp(sum+1); fill(dp.begin(), dp.end(), false);
    dp[sum] = true; dp[0] = true;
    for (int target_score=sum; target_score>=0; --target_score) {
        for (int score: scores) {
            dp[sum-score] = dp[sum];
        }
    }

    for (int score=sum; score>=0; --score) {
        if (dp[score] and score % 10 != 0) {
            cout << score << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}

