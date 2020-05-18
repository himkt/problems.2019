# include <iostream>
# include <iomanip>


using namespace std;


int main() {
    long long w, h, x, y; cin >> w >> h >> x >> y;

    cout << setprecision(9);
    cout << double(w) * double(h) / 2 << " ";
    cout << ((w == 2*x) and (h == 2*y)) << endl;
    return 0;
}

