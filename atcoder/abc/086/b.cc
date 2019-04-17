# include <iostream>
using namespace std;


int main() {
    string a, b; cin >> a >> b;
    int c = stoi(a+b);
    for (int i=1; i<100*100; ++i) {
        if (i*i == c) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

