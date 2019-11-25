# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


long long price(long long a, long long b, long long n) {
    long long d = log10(n) + 1;
    return (a * n) + (b * d);
}


int main() {
    long long a, b, x; cin >> a >> b >> x;

    long long imin = 0;
    long long imax = 1000000000;
    long long imid;

    while (imax >= imin) {
        imid = imin + (imax - imin) / 2;
        bool cond1 = price(a, b, imid) <= x;
        bool cond2 = price(a, b, imid+1) > x;
        if (cond1 and cond2) {
            break;
        }
        else if (!cond1) {
            imax = imid-1;
        }
        else {
            imin = imid+1;
        }
    }

    cout << imid << endl;
    return 0;
}

