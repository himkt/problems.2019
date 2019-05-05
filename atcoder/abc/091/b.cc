# include <map>
# include <iostream>
# include <string>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<string> s(n); rep(i, n) cin >> s[i];
	int m; cin >> m;
	vector<string> t(m); rep(i, m) cin >> t[i];
	int ans_score = 0;
	map<string, int> count;

	for (auto s_: s) {
		if (count.find(s_) != count.end()) count[s_]++;
		else count[s_] = 1;
	}

	for (auto t_: t) {
        if (count.find(t_) != count.end()) count[t_]--;
		else count[t_] = -1;
	}

	int ans = 0;
	for (pair<string, int> p: count) {
		ans = max(ans, p.second);
	}
	cout << ans << endl;
	return 0;
}

