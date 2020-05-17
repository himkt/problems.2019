# include <iostream>

using namespace std;


int main () {
    int n, m; cin >> n >> m;
    int na = n*(n-1) / 2;
    int nb = m*(m-1) / 2;
    cout << na+nb << endl;

    return 0;
}
