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

template<typename T>
string join(vector<T> inputs, string delimiter) {
    string result = inputs.front();
    size_t length = inputs.size();

    for (int i=0; i<length-1; ++i) {
        result += delimiter + (string)inputs[i];
    }

    return result;
}

int main() {
    int d; cin >> d;
    cout << "Christmas";
    for (int i=24-d; i>=0; i--) cout << " Eve";
    cout << endl;
    return 0;
}

