# include <iostream>
# include <string>
# include <vector>


using namespace std;


int main() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> a(n+1, 0);

    for (int i=0; i<n; i++) {
        if (s[i] == '<') a[i+1] = a[i] + 1;
    }

    for (int i=n-1; 0<=i; i--) {
        if (s[i] == '>' and a[i] <= a[i+1]) a[i] = a[i+1] + 1;
    }

    long long ans = 0;
    for (int ai: a) {
        ans += ai;
    }
    cout << ans << endl;
}
