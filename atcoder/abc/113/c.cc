# include <iostream>
# include <vector>
# include <map>


using namespace std;


template<typename T>
vector<int> argsort(vector<T> input) {
    size_t seq_len = input.size();

    vector<pair<int, T>> seq(seq_len);
    for (int i=0; i<seq_len; i++) {
        seq[i] = make_pair(input[i], i);
    }
    sort(seq.begin(), seq.end());

    vector<int> result(seq_len);
    for (int i=0; i<seq_len; i++) result[seq[i].second] = i;
    return result;
};


int main() {
    int n, m; cin >> n >> m;

    vector<int> p(m), y(m);
    for (int i=0; i<m; i++) cin >> p[i] >> y[i];

    map<int, vector<int>> r;
    for (int i=0; i<m; i++) {
        if (r.find(p[i]) == r.end()) r[p[i]] = {y[i]};
        else r[p[i]].push_back(y[i]);
    }

    map<pair<int, int>, int> ans;
    for (auto r_p: r) {
        vector<int> ra_p = argsort(r_p.second);

        for (int i=0; i<r_p.second.size(); i++) {
            ans[make_pair(r_p.first, r_p.second[i])] = ra_p[i]+1;
        }
    }

    for (int i=0; i<m; i++) {
        printf("%06d%06d\n", p[i], ans[make_pair(p[i], y[i])]);
    }
    return 0;
}

