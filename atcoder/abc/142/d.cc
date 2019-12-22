# include <iostream>
# include <vector>
# include <map>


using namespace std;


typedef std::vector<std::pair<long long, long long>> factor_result;
factor_result factor(long long base) {
    vector<pair<long long, long long>> fs;

    for (long long i=2; i*i <= base; i++) {
        if (base % i == 0) {
            long long cnt = 0;

            while (base % i == 0) {
                base /= i;
                cnt++;
            }

            fs.emplace_back(i, cnt);
        }
    }
    if (base > 1) {
        fs.emplace_back(base, 1);
    }

    return fs;
}


int main() {
    long long a, b; cin >> a >> b;
    auto ra = factor(a);
    auto rb = factor(b);

    map<int, int> cm;

    for (auto ra_: ra) {
        int e = ra_.first;
        if (cm.find(e) == cm.end()) cm[e] = 1;
        else cm[e]++;
    }

    for (auto rb_: rb) {
        int e = rb_.first;
        if (cm.find(e) == cm.end()) cm[e] = 1;
        else cm[e]++;
    }

    int ans = 1;
    for (auto ce: cm) {
        if (ce.second == 2) ans++;
    }

    cout << ans << endl;
    return 0;
}

