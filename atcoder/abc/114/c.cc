#include <iostream>
#include <string>
#include <vector>


using namespace std;


long long n;
long long ans;

vector<char> cs = {'7', '5', '3'};


void dfs (string s) {
    if (s != "" and stoll(s) > n) return;
    if (
            find(s.begin(), s.end(), '7') != s.end() and
            find(s.begin(), s.end(), '5') != s.end() and
            find(s.begin(), s.end(), '3') != s.end()) {
        ans++;
    }

    for (char c: cs) {
        dfs(s+c);
    }
    return;
}


int main() {
    cin >> n;
    dfs("");
    cout << ans << endl;
    return 0;
}
