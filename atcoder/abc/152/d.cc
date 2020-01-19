# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n; cin >> n;

    vector<vector<int>> cs(10, vector<int>(10, 0));

    string si;
    int start_num, last_num;

    for (int i=1; i<n+1; i++) {
        si = to_string(i);
        cs[si[0]-'0'][si[si.size()-1]-'0']++;
    }

    int ans = 0;
    for (int i=1; i<10; i++) {
        for (int j=1; j<10; j++) {
            ans += cs[i][j] * cs[j][i];
        }
    }

    cout << ans << endl;
    return 0;
}

