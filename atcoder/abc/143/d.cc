# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> L(n);
    for (int i = 0; i < n; i++) cin >> L[i];
    sort(L.begin(), L.end());

    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
          int ab = L[i] + L[j];
          int r = lower_bound(L.begin(), L.end(), ab) - L.begin();
          int l = j+1;
          ans += r-l;
        }
    }

    cout << ans << endl;
    return 0;
}

