# include <map>
# include <iostream>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n; cin >> n;
    map<char, char> s; char _s;
    
    rep (i, n) {
        cin >> _s;
        if (s.find(_s) == s.end()) s[_s] = 1;
        else s[_s]++;
    }

    if (s.size() == 4) {
        cout << "Four" << endl;
    }
    else {
        cout << "Three" << endl;
    }
    return 0;
}

