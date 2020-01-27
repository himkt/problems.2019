# include <iostream>
# include <vector>


using namespace std;
const int MOD = 1e9 + 7;


int main() {
    int n, m; cin >> n >> m;

    vector<int> a(m);
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }

    int t = 0;
    vector<int> b(n+1, 0);

    for (int cur=0; cur<=n; cur++) {
        if (m != 0 and a[t] == cur) {
            t++;
            continue;
        }

        if (m == 0 or (t <= m and a[t] != cur+1)) {
            if (cur == 0 and cur+1 <= n) b[cur+1] = 1;
            if (cur+1 <= n and b[cur] != 0) {
                b[cur+1] += b[cur];
                b[cur+1] %= MOD;
            }
        }

        if (m == 0 or (t <= m and a[t] != cur+2)) {
            if (cur == 0 and cur+2 <= n) b[cur+2] = 1;
            if (cur+2 <= n and b[cur] != 0) {
                b[cur+2] += b[cur];
                b[cur+2] %= MOD;
            }
        }
    }

    b[n] %= MOD;
    cout << b[n] << endl;
    return 0;
}

