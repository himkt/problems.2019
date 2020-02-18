# include <iostream>
# include <string>

using namespace std;

bool is_complex(string s) {
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == s[i+1]) return true;
    }
    return false;
}


int main() {
    string s; cin >> s;
    if (is_complex(s)) cout << "Bad" << endl;
    else cout << "Good" << endl;
    return 0;
}
