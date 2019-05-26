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


int n, k;


long double calc_prob(int coin) {
    int current_score = coin;
    long double prob = 1.0;

    while (true) {
        if (current_score >= k) break;
        current_score *= 2;
        prob *= 0.5;
    }
    return prob;
}



int main() {
    cin >> n >> k;
    long double prob_lose = 0.0;

    rep (i, n) {
        prob_lose += calc_prob(i+1)/n;
    }

    cout.precision(10);
    cout << prob_lose << endl;
    return 0;
}

