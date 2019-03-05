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


long long min(long long a, long long b) {
    if (a < b) return a;
    else return b;
}


int main() {
    long long a, b, q; cin >> a >> b >> q;
    long long x, ans, candidate;
    long long s1, s2, t1, t2;
    long long inf = 1001001001001001;
    vector<long long> s(a+2); rep(i, a) cin >> s[i+1];
    vector<long long> t(b+2); rep(i, b) cin >> t[i+1];
    vector<long long> ds(2);
    vector<long long> dt(2);

    s[0] = -inf; s.back() = inf;
    t[0] = -inf; t.back() = inf;

    rep (i, q) {
        ans = inf;

        cin >> x;
        int s_right_idx = lower_bound(s.begin(), s.end(), x) - s.begin();
        int t_right_idx = lower_bound(t.begin(), t.end(), x) - t.begin();

        ds = {s[s_right_idx], s[s_right_idx-1]};
        dt = {t[t_right_idx], t[t_right_idx-1]};

        for (long long s: ds) {
            for (long long t: dt) {
                // 1. x -> s, s -> t
                // 2. x -> t, t -> s
                candidate = min(abs(s-x) + abs(t-s), abs(t-x) + abs(s-t));
                ans = min(ans, candidate);
            }
        }
        cout << ans << endl;
    }

    return 0;
}

