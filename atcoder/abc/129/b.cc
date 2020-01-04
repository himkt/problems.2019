# include <iostream>
# include <vector>


using namespace std;


int sum(vector<int> w) {
    int ret = 0;
    for (int e: w) {
        ret += e;
    }
    return ret;
}


int main() {
    int n; cin >> n;

    vector<int> w(n);
    for (int i=0; i<n; i++) cin >> w[i];

    int l = 0;
    int r = sum(w);

    int ans = 1001001001;
    for (int i=0; i<n; i++) {
        l += w[i];
        r -= w[i];
        ans = min(ans, abs(l-r));
    }

    cout << ans << endl;
    return 0;
}

