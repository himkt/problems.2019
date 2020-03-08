# include <iostream>


using namespace std;


int main() {
    int max_price = 12.5*100 + 100;
    int a, b; cin >> a >> b;

    for (int price=0; price<max_price; price++) {
        if ((int)(price*0.08) == a && (int)(price*0.1) == b) {
            cout << price << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
