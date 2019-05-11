# include <vector>
# include <iostream>
# include <string>
using namespace std;

int solve(vector<string> &s) {

    int larb = 0;
    int la = 0;
    int rb = 0;
    int ab = 0;

    for (string si: s) {
        if (si.front() == 'B' and si.back() == 'A') {
            larb++;  // c1
        }

        if (si.front() == 'B' and si.back() != 'A') la++; // c2
        if (si.front() != 'B' and si.back() == 'A') rb++; // c3

        for (int j=0; j<si.size()-1; j++) {
            if (si[j] == 'A' and si[j+1] == 'B') ab++;
        }
    }


    int ans = ab;
    if (larb == 0) { // ok
        ans += min(la, rb);
    }
    else {
        if (la + rb > 0) {
            ans += larb + min(la, rb);
        }
        else {
            ans += larb - 1;
        }
    }

    return ans;
}

int main() {
    int n; cin >> n;
    vector<string> s(n); for(int i=0; i<n; i++) cin >> s[i];
    cout << solve(s) << endl;
    return 0;
}
