#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <cmath>


using namespace std;


int main() {
    int n, d; cin >> n >> d;
    vector<vector<int>> x(n);
    for (int i=0; i<n; ++i) x[i].resize(d);
    for (int i=0; i<n; ++i) {
        for (int j=0; j<d; ++j) {
            cin >> x[i][j];
        }
    }

    int ans = 0;
    for (int i=0; i<n; ++i) {
        for (int j=i+1; j<n; ++j) {
            if (i == j) continue;
            int dist = 0;
            for (int k=0; k<d; ++k) {
                dist += pow(x[i][k] - x[j][k], 2);
            }

			if (sqrt(dist) - int(sqrt(dist)) == 0) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

