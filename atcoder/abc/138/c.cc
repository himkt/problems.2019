# include <vector>
# include <iostream>


using namespace std;


int main() {
    int n; cin >> n;
    vector<float> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    float val = v[0];
    for (int i=1; i<n; i++) {
        val = (val + v[i]) / 2;
    }
    cout << val << endl;
    return 0;
}

