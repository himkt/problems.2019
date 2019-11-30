#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
 
 
using namespace std;
 
 
int to_int(char c) {
    return c - '0';
}
 
 
int main() {
    int n, k; cin >> n >> k;
 
    vector<int> d(k);
    for (int i=0; i<k; ++i) cin >> d[i];
 
    bool is_valid;
    for (int i=n; i<=10*n; ++i) {
 
        is_valid = true;
 
        for (char c: to_string(i)) {
            if (find(d.begin(), d.end(), to_int(c)) != d.end()) {
                is_valid = false; break;
            }
        }
 
        if (is_valid) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
