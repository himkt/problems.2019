# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    string s; cin >> s;

    if (s.substr(0, n/2) ==s.substr(n/2, n)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

