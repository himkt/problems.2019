# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<char> ans;

    vector<char> alphabet;
    for (char _char='A'; _char<='Z'; _char++) alphabet.push_back(_char);
    for (char _char='A'; _char<='Z'; _char++) alphabet.push_back(_char);
    for (char _char='A'; _char<='Z'; _char++) alphabet.push_back(_char);

    for (char _char: s) {
        auto ret = find(alphabet.begin(), alphabet.end(), _char);
        auto idx = distance(alphabet.begin(), ret);
        cout << alphabet[idx+n];
    }
    cout << endl;
    return 0;
}

