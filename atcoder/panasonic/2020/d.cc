# include <iostream>
# include <string>


using namespace std;
int n;


void dfs(string s, char mx) {
    if (s.size() == n) {
        cout << s << endl;
    }
    else {
        for (char c='a'; c<=mx+1; c++) {
            dfs(s+c, max(mx, c));
        }
    }
}


int main () {
    cin >> n;
    dfs("", 'a'-1);
    return 0;
}
