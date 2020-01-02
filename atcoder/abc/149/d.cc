# include <iostream>
# include <vector>


using namespace std;


int score(char x, int r, int s, int p) {
    if (x == 'r') return r;
    if (x == 's') return s;
    if (x == 'p') return p;
    return -1;
}


int main() {
    int n, k; cin >> n >> k;
    int r, s, p; cin >> r >> s >> p;
    string t; cin >> t;

    string a = "";
    for (char c: t) {
        if (c == 'r') a += 'p';
        if (c == 's') a += 'r';
        if (c == 'p') a += 's';
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (i<k) {
            ans += score(a[i], r, s, p);
            continue;
        }
        if (a[i] != a[i-k]) {
            ans += score(a[i], r, s, p);
            continue;
        }

        a[i] = 'x';
    }

    cout << ans << endl;
    return 0;
}

