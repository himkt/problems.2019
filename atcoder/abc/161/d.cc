# include <queue>
# include <iostream>


using namespace std;


int main() {
    long long k; cin >> k;

    queue<long long> q;
    for (long long i=1; i<=9; i++) q.push(i);

    long long t, s, cnt;
    vector<long long> ns;

    cnt = 0;
    while (true) {
        t = q.front(); q.pop();
        s = t - ((t / 10) * 10);

        if (s == 0) ns = {0, 1};
        else if (s == 9) ns = {8, 9};
        else ns = {s-1, s, s+1};

        for (long long n: ns) {
            q.push(t*10 + n);
        }

        cnt++;
        if (cnt == k) {
            cout << t << endl;
            break;
        }
    }
    return 0;
}

