# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<vector<int>> a(2);
    for(int i=0; i<2; ++i) {
        a[i].resize(n);
        for (int j=0; j<n; ++j) cin >> a[i][j];
    }

    a[1][0] += a[0][0];
    for (int i=1; i<n; ++i) a[0][i] += a[0][i-1];
    for (int i=1; i<n; ++i) a[1][i] += max(a[0][i], a[1][i-1]);

    cout << a[1][n-1] << endl;
    return 0;
}

