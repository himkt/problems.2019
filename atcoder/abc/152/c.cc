# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;

    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];

    int ans = 1;
    int cur = 1001001001;
    for (int i=1; i<n; i++) {
        cur = min(cur, p[i-1]);
        if (cur >= p[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}

