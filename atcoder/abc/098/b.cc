#include <iostream>
#include <string>
#include <map>
using namespace std;


int query (map<char, int> lcounter, map<char, int> rcounter) {
    int ans = 0;

    for (pair<char, int> lpair: lcounter) {
        char key = lpair.first;
        int count = lpair.second;

        if (count <= 0 or rcounter.find(key) == rcounter.end()) continue;
        if (rcounter[key] > 0) ans++;
    }

    return ans;
}


int main() {
    int n; string s; cin >> n >> s;
    map <char, int> lcount, rcount;
    int ans = 0;

    for (char c: s) {
        if (lcount.find(c) == lcount.end()) {
            lcount[c] = 1;
        }
        else {
            lcount[c]++;
        }
    }

    for (char c: s) {
        lcount[c]--;

        if (rcount.find(c) == rcount.end()) {
            rcount[c] = 1;
        }
        else {
            rcount[c]++;
        }
        ans = max(ans, query(lcount, rcount));
    }

    cout << ans << endl;
    return 0;
}

