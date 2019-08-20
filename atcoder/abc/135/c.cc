# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n+1), b(n);
    for (int i=0; i<=n; i++) cin >> a[i];
    for (int i=0; i<n ; i++) cin >> b[i];

    int cur;
    long long score = 0;
    for (int i=0; i<n; i++) {
        // if a[i] > b[i] => b[i]  (敵の数のほうがおおい)
        // if a[i] < b[i] => a[i]  (倒せる数の方がおおい）
        cur = min(a[i], b[i]);
        score += cur; a[i] -= cur; b[i] -= cur;

        if (b[i] == 0) continue;

        cur = min(a[i+1], b[i]);
        score += cur; a[i+1] -= cur; b[i] -= cur;
    }

    cout << score << endl;
    return 0;
}

