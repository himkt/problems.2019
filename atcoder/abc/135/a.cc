# include <iostream>


using namespace std;


int main() {
    int a, b; cin >> a >> b;
    for (int k=0; k<1e9; ++k) {
        if (abs(a-k) == abs(b-k)) {
            cout << k << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}

