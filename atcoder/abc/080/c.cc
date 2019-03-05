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
    int n; cin >> n;

    vector<vector<int>> f(n+1);
    vector<vector<int>> q(n+1);

    rep(i, n) {
        f[i].resize(10);
        fill(f[i].begin(), f[i].end(), 0);
        rep (j, 10) cin >> f[i][j];
    }

    rep(i, n) {
        q[i].resize(10);
        fill(q[i].begin(), q[i].end(), 0);
        rep (j, 10) cin >> q[i][j];
    }

    vector<int> values(n+1);
    fill(values.begin(), values.end(), 0);

    rep (i, n) {
        rep (j, 10) {
            cout << "(i, j) = (" << i << ", " << j << "); ";
            cout << "f[i][j] = " << f[i][j] << " ";
            cout << "q[i][j] = " << q[i][j] << " " << endl;

            values[i] += f[i][j] * q[i][j];
        }
    }

    rep (i, 10) cout << values[i] << ' ';



    return 0;
}

