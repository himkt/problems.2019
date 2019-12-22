# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>


using namespace std;


int main() {
    int a, b; cin >> a >> b;
    vector<int> wrongs(3, 0);
    wrongs[--a]++;
    wrongs[--b]++;

    for (int i=0; i<3; i++) {
        if (wrongs[i] == 0) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}

