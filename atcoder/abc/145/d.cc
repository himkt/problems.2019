# include <cmath>
# include <iostream>
# include <queue>
# include <set>
# include <stack>
# include <string>
# include <vector>
# include <map>


using namespace std;
const int _div = 1000000000 + 7;


int main() {
    int x, y; cin >> x >> y;

    map<pair<int, int>, int> grid;
    grid[make_pair(0, 0)] = 1;

    vector<int> dx = {1, 2};
    vector<int> dy = {2, 1};

    queue<pair<int, int>> queue;
    queue.push(make_pair(0, 0));

    while (!queue.empty()) {
        auto p = queue.front(); queue.pop();
        for (int i=0; i<2; i++) {
            int nx = p.first  + dx[i];
            int ny = p.second + dy[i];
            grid[make_pair(nx, ny)] += (grid[make_pair(p.first, p.second)] % _div);

            if (nx <= x and ny <= y) {
                queue.push(make_pair(nx, ny));
            }
        }
    }

    // for (int i=0; i<lim; i++) {
    //     for (int j=0; j<lim; j++) {
    //         cout << grid[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    cout << grid[make_pair(x, y)] % _div << endl;
    return 0;
}

