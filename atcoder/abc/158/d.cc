# include <iostream>
# include <queue>
# include <string>


using namespace std;


int main() {
    string s; cin >> s;
    int q; cin >> q;
    bool l_is_head = true;

    deque<char> deque;
    for (char c: s) deque.push_back(c);

    int t, f; char c;
    for (int i=0; i<q; i++) {
        cin >> t;
        if (t == 1) {
            l_is_head = !l_is_head;
            continue;
        }

        cin >> f >> c;
        if (t == 2 && f == 1) {
            if (l_is_head) deque.push_front(c);
            else deque.push_back(c);
        }
        if (t == 2 && f == 2) {
            if (l_is_head) deque.push_back(c);
            else deque.push_front(c);
        }
    }

    string ans = "";
    for (char s: deque) {
        ans += s;
    }

    if (!l_is_head) reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}

