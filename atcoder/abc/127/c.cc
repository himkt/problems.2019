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
    int n, m; cin >> n >> m;
    vector<int> l(m), r(m);
    rep (i, m) {
        cin >> l[i] >> r[i];
        l[i]--; r[i]--;
    }

    vector<int> allowed_cards(n+1);
    rep (i, m) {
        // L_i, L_{i+1}, ..., R_i
        allowed_cards[l[i]]++;
        allowed_cards[r[i]+1]--;
    }

    int ans = 0;
    int ptr = 0;
    rep (i, n) {
        ptr += allowed_cards[i];
        if (ptr == m) ans++;
    }
        
    cout << ans << endl;
    return 0;
}

