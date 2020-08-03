# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>
# include <map>


using namespace std;


int rate2index (int x) {
    if (1    <= x and x <= 399)  return 0;
    if (400  <= x and x <= 799)  return 1;
    if (800  <= x and x <= 1199) return 2;
    if (1200 <= x and x <= 1599) return 3;
    if (1600 <= x and x <= 1999) return 4;
    if (2000 <= x and x <= 2399) return 5;
    if (2400 <= x and x <= 2799) return 6;
    if (2800 <= x and x <= 3199) return 7;
    else return 8;
}


int main() {
    int n; cin >> n;

    int a;
    int index;
    map<int, int> c;
    for (int i=0; i<n; i++) {
        cin >> a; index = rate2index(a);
        if (c.find(index) == c.end()) c[index] = 1;
        else c[index]++;
    }

    int max = 0;
    int min = 0;
    for (int i=0; i<8; i++) {
        if (c.find(i) != c.end()) {
            max++;
            min++;
        }
    }

    if (c.find(8) != c.end()) {
        max += c[8];
        if (min == 0) min++;
    }

    cout << min << " " << max << endl;
    return 0;
}

