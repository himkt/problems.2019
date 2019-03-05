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
    int a, b, k; cin >> a >> b >> k;
    int min_val = min(a, b);
    int ans = 0;

    rep (i, min_val) {
        if (a % (min_val - i) != 0) continue;
        if (b % (min_val - i) != 0) continue;
        k--;
        ans = min_val-i;
        if (k==0) break;
    }

    cout << ans << endl;
    return 0;
}

