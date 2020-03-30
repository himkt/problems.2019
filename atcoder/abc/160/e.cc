# include <iostream>
# include <vector>


using namespace std;


int main() {
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;

    vector<int> p(a); for (int i=0; i<a; i++) cin >> p[i];
    vector<int> q(b); for (int i=0; i<b; i++) cin >> q[i];
    vector<int> r(c); for (int i=0; i<c; i++) cin >> r[i];

    sort(p.begin(), p.end(), greater<int>());
    sort(q.begin(), q.end(), greater<int>());
    sort(r.begin(), r.end(), greater<int>());

    vector<int> s;
    for (int i=0; i<x; i++) s.push_back(p[i]);
    for (int i=0; i<y; i++) s.push_back(q[i]);
    for (int i=0; i<c; i++) s.push_back(r[i]);
    sort(s.begin(), s.end(), greater<int>());

    long long ans = 0;
    for (int i=0; i<x+y; i++) {
        ans += s[i];
    }

    cout << ans << endl;
    return 0;
}
