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
    vector<float> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    float val = 0;
    for (int i=0; i<n; i++) {
        val += 1 / a[i];
    }
    cout << 1/ val << endl;
    return 0;
}

