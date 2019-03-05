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


string s;
int ans = 0;


int main() {
    cin >> s; size_t len = s.length();
    queue<char> _queue;

    rep (i, len) {
        if (_queue.size() == 0) {
            _queue.push(s[i]);
            continue;
        }
        else if (_queue.front() != s[i]) {
            _queue.pop();
            ans += 2;
            continue;
        }
        else {
            _queue.push(s[i]);
            continue;
        }
    }

    cout << ans << endl;
    return 0;
}

