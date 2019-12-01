# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>
# include <map>


using namespace std;


int n;


bool make(string s, string s_) {
    int pos = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == s_[pos]) pos++;
    }

    return pos == 3;
}


int main() {
    cin >> n;
    string s; cin >> s;
    string s_;

    int ans = 0;
    for (int i=0; i<1000; i++) {
        if (i<10) s_ = "00" + to_string(char(i));
        else if (i<100) s_ = "0" + to_string(char(i));
        else s_ = to_string(i);
        if (make(s, s_)) ans++;
    }

    cout << ans << endl;
    return 0;
}

