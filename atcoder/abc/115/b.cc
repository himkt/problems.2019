# include <iostream>
# include <vector>
using namespace std;


int main() {
    int n;  cin >> n;
    int ans = 0;

    vector<int> p(n);
    for (int i=0; i<n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    ans += p.back() / 2;
    for (int i=0; i<n-1; i++) ans += p[i];

    cout << ans << endl;
    return 0;
}
