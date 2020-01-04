# include <algorithm>
# include <iostream>
# include <iterator>
# include <vector>
# include <string>
# include <queue>
# include <stack>
# include <cmath>
# include <set>


using namespace std;


int main() {
    float n, d; cin >> n >> d;
    float ansf = n / (2*d+1);

    if (ansf - int(ansf) > 0) cout << int(ansf)+1 << endl;
    else cout << int(ansf) << endl;
    return 0;
}

