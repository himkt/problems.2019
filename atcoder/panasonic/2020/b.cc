# include <iostream>


using namespace std;


int main() {
    long long h, w; cin >> h >> w;

    long long h1 = (h+1.0)/2;
    long long w1 = (w+1.0)/2;
    long long h2 = h/2;
    long long w2 = w/2;

    if (h == 1 or w == 1) cout << 1 << endl;
    else cout << h1*w1 + h2*w2 << endl;

    return 0;
}

