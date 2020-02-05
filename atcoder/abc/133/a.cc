#include <algorithm>
#include <iostream>
#include <istream>
#include <iterator>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>


using namespace std;


int main() {
    int n, a, b; cin >> n >> a >> b;
    cout << min(n*a, b) << endl;
    return 0;
}

