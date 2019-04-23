# include <iostream>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n; cin >> n; vector<int> a(n); rep(i, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    vector<int> sum_list = {0, 0};

    rep (i, n) sum_list[i%2] += a[i];
    cout << sum_list[0] - sum_list[1] << endl;
    return 0;
}

