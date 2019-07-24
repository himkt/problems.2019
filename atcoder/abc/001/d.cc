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
    int n, source, target; cin >> n;
    string _line;

    vector<int> rainc(2401);
    for (int i=0; i<n; ++i) {
        cin >> _line;

        source = stoi(_line.substr(0, 4));
        source = 5*(source/5); // floor
        rainc[source]++;

        target = stoi(_line.substr(5, 8));
        target = 5*(((target+4)/5)); // ceil
        rainc[target+1]--;
    }

    for (int timestamp=0; timestamp<2400; ++timestamp)
        rainc[timestamp+1] += rainc[timestamp];

    for (int timestamp=0; timestamp<2400; ++timestamp) {
        if (rainc[timestamp] <= 0) continue;
        printf("%04d-", timestamp);

        while(rainc[timestamp] > 0 || (timestamp-1) % 100 >= 56) {
            timestamp++;
        }
        printf("%04d\n", timestamp-1);
    }

    return 0;
}

