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


int max(vector<int> & l) {
    int max = -1;
    rep (i, l.size()) {
        if (max < l[i]) max = l[i];
    }
    return max;
}


int sum(vector<int> & l) {
    int ans = 0;
    rep (i, l.size()) ans += l[i];
    return ans;
}


int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    rep (i, n) cin >> l[i];

    int lmax = max(l);
    int lsum = sum(l) - lmax;

    if (lmax >= lsum) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }

    return 0;
}

