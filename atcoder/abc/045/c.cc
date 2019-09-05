# include <cmath>
# include <iostream>
# include <string>
# include <vector>


using namespace std;


vector<long long> int2divs(long long k, long long len) {
    vector<long long> result(len); fill(result.begin(), result.end(), 0);

    for (long long t=0; t<len; ++t) {
        if (k>>t & 1) result[t] = 1;
    }
    return result;
}


int main() {
    string s; cin >> s;
    long long len = s.size()-1;
    long long ans = 0;

    for (long long k=0; k<pow(2, len); ++k) {
        vector<long long> divs = int2divs(k, len);

        string _s = ""; _s += s.at(0);
        for (long long i=0; i<len; ++i) {
            if (!divs[i]) {
                _s += s.at(i+1);
            }
            else {
                ans += stoll(_s);
                _s = ""; _s = s.at(i+1);
            }
        }
        
        ans += stoll(_s);
    }

    cout << ans << endl;
    return 0;
}
