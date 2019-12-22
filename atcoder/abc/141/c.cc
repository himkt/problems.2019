# include <iostream>
# include <vector>


using namespace std;


int main() {
    int n, k, q; cin >> n >> k >> q;

    vector<int> a(n, -q+k);
    int a_k;
    for (int i=0; i<q; i++) {
        cin >> a_k;
        a[--a_k]++;
    }

    for (int a_k: a) {
        if (a_k > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

