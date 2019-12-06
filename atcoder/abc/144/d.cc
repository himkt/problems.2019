# include <cmath>
# include <iostream>
# include <iomanip>


using namespace std;


int main() {
    double a, b, x; cin >> a >> b >> x;
    double s = x/a;
    double rad;

    if (s >= a*b/2) {  // triangle
        double h = (a*b-s)*2/a;
        rad = atan2(h, a);
    }
    else {  // rectangle
        double w = s*2/b;
        rad = atan2(b, w);
    }

    double ans = rad/(2*acos(-1))*360;
    cout << setprecision(10) << ans << endl;
    return 0;
}

