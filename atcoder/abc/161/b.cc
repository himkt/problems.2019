# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n, m; cin >> n >> m;
    vector<double> a(n);

    double s = 0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        s += a[i];
    }

    int cnt = 0;
    for (int i=0; i<n; i++) {
        if (a[i] >= (s / (4*m))) cnt++;
    }

    if (cnt >= m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

