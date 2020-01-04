# include <algorithm>
# include <iostream>
# include <iterator>
# include <vector>
# include <string>
# include <queue>
# include <stack>
# include <cmath>
# include <set>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) cin >> a[i];

    vector<int> sa = a;
    sort(sa.begin(), sa.end(), greater<int>());

    for (int i=0; i<n; ++i) {
        if (a[i] == sa[0]) cout << sa[1] << endl;
        else cout << sa[0] << endl;
    }
    return 0;
}

