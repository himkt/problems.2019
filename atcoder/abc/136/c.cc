# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;
    vector<int> h(n); for (int i=0; i<n; ++i) cin >> h[i];

    int cur = h.at(0);
    for (int i=1; i<n; ++i) {
        if (cur > h.at(i)) h.at(i)++;
        if (cur > h.at(i)) {
            cout << "No" << endl;
            return 0;
        }
        cur = h.at(i);
    }

    cout << "Yes" << endl;
    return 0;
}

