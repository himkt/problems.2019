# include <iostream>
# include <string>
# include <algorithm>

using namespace std;


bool palindrome1 (string s) {
    string ss = s;
    reverse(ss.begin(), ss.end());
    return s == ss;
}


bool palindrome2 (string s) {
    string ss = s.substr(0, (s.size()-1)/2);
    string ss_ = ss;
    reverse(ss_.begin(), ss_.end());
    return ss == ss_;
}


bool palindrome3 (string s) {
    int cursor = (s.size()+3)/2 - 1;
    string ss = s.substr(cursor);
    string ss_ = ss;
    return ss == ss_;
}


int main () {
    string s; cin >> s;

    if (palindrome1(s) and palindrome2(s) and palindrome3(s)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
