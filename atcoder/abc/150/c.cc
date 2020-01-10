# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int n;


bool vector_equal(vector<int> &a, vector<int> &b) {
    for (int i=0; i<n; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}


int main() {
    cin >> n;

    vector<int> p(n), q(n);
    for (int i=0; i<n; i++) cin >> p[i];
    for (int i=0; i<n; i++) cin >> q[i];

    vector<int> r(n);
    for (int i=0; i<n; i++) r[i] = i+1;

    int np, nq;
    int i = 0;
    do {
        i++;
        if (vector_equal(p, r)) np = i;
        if (vector_equal(q, r)) nq = i;

    } while (next_permutation(r.begin(), r.end()));

    cout << abs(np - nq) << endl;

    return 0;
}

