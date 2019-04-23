# include <iostream>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, a; cin >> n >> a;
    rep (i, a+1) {
        if ((n-i) % 500 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}

