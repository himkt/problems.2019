# include <iostream>
# include <vector>
# include <map>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, bool> has_key;

    vector<string> words(n);
    for (int i=0; i<n; ++i) {
        cin >> words[i];
        if (has_key.find(words[i]) == has_key.end()) {
            has_key[words[i]] = true;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }

    char prev_char = words[0].back();
    for (int i=1; i<n; ++i) {
        if (prev_char != words[i][0]) {
            cout << "No" << endl;
            return 0;
        }
        prev_char = words[i].back();
    }

    cout << "Yes" << endl;
    return 0;
}