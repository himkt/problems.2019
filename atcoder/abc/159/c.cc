# include <iostream>
# include <iomanip>

using namespace std;


int main () {
    long double l; cin >> l; l /= 3.0;
    cout << setprecision(12) << l*l*l << endl;
    return 0;
}
