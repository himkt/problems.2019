# include <iostream>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n); rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    cout << a.back() - a[0] << endl;
    return 0;
}

