# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> p(n); for (int i=0; i<n; i++) cin >> p[i];
    int diff = 0;

    for (int i=1; i<=n; i++) {
        if (p[i-1] != i) diff++;
    }

    if (diff <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

