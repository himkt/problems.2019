# include <iostream>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;



int main() {
    vector<int> antennas(5);
    rep (i, 5) cin >> antennas[i];
    int k; cin >> k;

    int pmax = *max_element(antennas.begin(), antennas.end());
    int pmin = *min_element(antennas.begin(), antennas.end());

    if (pmax - pmin > k) cout << ":(" << endl;
    else cout << "Yay!" << endl;
    return 0;
}

