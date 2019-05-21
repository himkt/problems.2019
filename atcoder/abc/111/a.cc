# include <iostream>
# include <string>

using namespace std;

int main() {
    string n; cin >> n;
    for (char c: n) {
        if (c == '1') cout << '9';
        else if (c == '9') cout << '1';
        else cout << c << endl;
    }
    cout << endl;
    return 0;
}

