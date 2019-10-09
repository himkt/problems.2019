# include <iostream>
# include <set>
# include <string>
# include <vector>


using namespace std;


int main() {
    set<string> substrings;

    string s; cin >> s;
    int    k; cin >> k;

    string substring;
    for (int _k=1; _k<=k; _k++) {
        for (int window_left=0; window_left < s.size()-_k+1; window_left++) {
            substring = s.substr(window_left, _k);
            substrings.insert(substring);
        }
    }

    vector<string> substrings_vector(substrings.begin(), substrings.end());
    sort(substrings_vector.begin(), substrings_vector.end());

    cout << substrings_vector[k-1] << endl;
    return 0;
}

