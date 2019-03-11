// include headers{{{
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
/*}}}*/
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, m, c; cin >> n >> m >> c;
    vector<int> b(m);
    rep (i, m) cin >> b[i];
    vector<vector<int>> a(n);
    rep (i, n) a[i].resize(m);

    rep (i, n) {
        rep (j, m) cin >> a[i][j];
    }

    int ans = 0;
    rep (i, n) {
        int val = c;
        rep (j, m) {
            val += (a[i][j]*b[j]);
        }
        if (val > 0) ans++;
    }
    cout << ans << endl;
    return 0;
}

