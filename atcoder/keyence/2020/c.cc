# include <iostream>
# include <vector>


using namespace std;


int main() {
    long long n, k, s; cin >> n >> k >> s;

    vector<long long> a(n, s);
    for (int i=0; i<n-k; i++) {
        if (s == 1e9) {
            a[i]--;
        }
        else {
            a[i]++;
        }
    }

    for (auto a_i: a) cout << a_i << ' '; cout << endl;

    return 0;
}

