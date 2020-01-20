# include <iostream>


using namespace std;


int main() {
    int h, w, n; cin >> h >> w >> n;
    double ret = (double)n / max(h, w);

    if (ret == (int)ret) {
        cout << ret << endl;
    }
    else {
        cout << (int)(ret+1.0) << endl;
    }
    return 0;
}

