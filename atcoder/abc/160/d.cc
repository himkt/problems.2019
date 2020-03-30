# include <iostream>
# include <vector>


using namespace std;
const int INF = 1001001001;


int n, x, y;


int main() {
    cin >> n >> x >> y;
    x--; y--;

    vector<vector<int>> d(n, vector<int>(n));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            d[i][j] = i > j ? i-j : j-i;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=x+1; j<n; j++) {
            if (i >= j) continue;

            int mid;
            if (j-x > y-j) {
                mid = d[j][y];
            }
            else {
                mid = d[x][j];
            }

            d[i][j] = min(d[i][j], d[i][x]+1+mid);
        }
    }


    vector<int> cnt(n, 0);
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            cnt[d[i][j]]++;
        }
    }

    for (int i=1; i<n; i++) {
        cout << cnt[i] << endl;
    }
    return 0;
}

