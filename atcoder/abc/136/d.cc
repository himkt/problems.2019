# include <iostream>
# include <string>
# include <vector>


using namespace std;


vector<int> score (string s, int e) {
    vector<int> result = {0, 0};

    for (int i=e-1; i>=0; i--) {
        if (s[i] == 'L') break;

        result[(e-i+1)%2]++;
    }

    for (int i=e; i<s.size(); i++) {
        if (s[i] == 'R') break;

        result[(i-e+1)%2]++;
    }

    return result;
}


int main() {
    string s; cin >> s;
    int n = s.size();

    vector<int> divs;
    for (int i=1; i<n; i++) {
        if (s[i-1] == 'R' and s[i] == 'L') {
            divs.push_back(i);
        }
    }

    vector<int> ans(n, 0);

    for (int e: divs) {
        auto ret = score(s, e);
        ans[e-1] += ret[0];
        ans[e] += ret[1];
    }

    for (int e: ans) cout << e << ' '; cout << endl;
    return 0;
}

