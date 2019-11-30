# include <iostream>
# include <vector>
# include <map>


using namespace std;
int n; vector<int> a;


int main() {
    cin >> n; a.resize(n);
    for (int i=0; i<n; ++i) cin >> a[i];

    map<int, int> count;
    for (int _a: a) {
        if (count.find(_a) == count.end()) count[_a] = 1;
        else count[_a]++;
    }

    bool has_answer = false;
    if (count.size() == 3)  {  // { ok if count[a] == count[b] == count[c] else ng }
        int _xor;
        int size = -1;
        for (pair<int, int> _c: count) {
            if (size == -1) {
                size = _c.second;
                _xor = _c.first;
                continue;
            }
            _xor ^= _c.first;
            has_answer = (size == _c.second);  // something wrong
        }
        has_answer &= (_xor == 0);
    }

    if (count.size() == 2)  {  // { ok if 2*count[a] == count[0] }
        int size = -1;
        for (pair<int, int> _c: count) {
            if (size == -1) {
                size = (_c.first == 0) ? 2*_c.second: _c.second;
                continue;
            }
            has_answer = (size == _c.second);
        }
    }

    if (count.size() == 1)  {  // { ok if count[0] == n and n%3 == 0}
        has_answer = (count.find(0) != count.end());
    }

    cout << (has_answer ? "Yes": "No") << endl;
    return 0;
}

