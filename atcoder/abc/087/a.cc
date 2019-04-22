# include <iostream>
using namespace std;

int main() {
    int x, a, b; cin >> x >> a >> b;
    x -= a;
    for (; x-b>=0;) x -= b;
    cout << x << endl;
    return 0;
}

