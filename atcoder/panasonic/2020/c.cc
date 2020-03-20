# include <cmath>
# include <iostream>
# include <string>
# include <vector>


using namespace std;


int main() {
    long double a, b, c; cin >> a >> b >> c;

    if (2 * sqrt(a*b) < c - a - b) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

