# include <iostream>
# include <vector>


using namespace std;


const int MAX = 1e5+5;


int main() {
    
    vector<bool> is_prime(MAX, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i=2; i<=MAX; i++) {
        if (!is_prime[i]) continue;

        for (int j=2; i*j<=MAX; j++) {
            is_prime[i*j] = false;
        }
    }

    int x; cin >> x;
    for (int i=x; i<=MAX; i++) {
        if (is_prime[i]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

