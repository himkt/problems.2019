#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>


using namespace std;


void dfs(string s, int n) {
    if (s.size() == n) {
        cout << s << endl;
        return;
    }

    vector<char> cs = {'a', 'b', 'c'};
    for (char c: cs) {
        string new_s = s+c;
        dfs(new_s, n);
    }
}


int main() {
    int n; cin >> n;
    dfs("", n);
    return 0;
}

