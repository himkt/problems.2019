# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int a1, a2, a3; cin >> a1 >> a2 >> a3;
    if (a1+a2+a3 >= 22) {
        cout << "bust" << endl;
    }
    else {
        cout << "win" << endl;
    }
    return 0;
}

