# include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    while (true) {
        int i = n/100;
        int j = n/10 - 10*i;
        int k = n - 100*i - 10*j;

        if (i == j and j == k) break;
        n++;
    }

    cout << n << endl;
    return 0;
}

