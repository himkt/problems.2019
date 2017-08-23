//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class Graph {
  public:
    int n_node;
    vector<vector<int>> edge;

    Graph(int n_node) : n_node(n_node){
      edge.resize(n_node);
    };

    void add_edge(int i, int j);
};

void Graph::add_edge(int i, int j) {
  // cout << i << ", " << j << endl;
  edge[i].push_back(j);
}

int main() {
  int w, h, c;
  int block;


  while (cin >> w >> h, w) {
    Graph g(w*h);

    rep (i, 2*h-1) {
      if (i%2 == 0) {
        // yoko
        rep (j, w-1) {
          cin >> block;
          int offset = w * (i / 2);
          int c = offset + j;
          if (block == 0) g.add_edge(c, c+1);
          if (block == 0) g.add_edge(c+1, c);
        }
      }
      else {
        // tate
        rep (j, w) {
          int offset = w * ((i - 1) / 2);
          cin >> block;
          c = j + offset;
          if (block == 0) g.add_edge(c, c+w);
          if (block == 0) g.add_edge(c+w, c);
        }
      }
    }

    // bfs
    queue<int> que;
    que.push(0);

    vector<int> cost(w*h);
    rep (i, w*h) cost[i] = 1001001001;
    cost[0] = 1;

    while (!que.empty()) {
      int current = que.front(); que.pop();

      for (int next_ : g.edge[current]) {
        if (cost[next_] == 1001001001) {
          que.push(next_);
          cost[next_] = cost[current] + 1;
          // cout << "current: " << current << ", next: " << next_ << endl;
          // cout << "current_cost: " << cost[current] << endl;
        }
      }
    }

    if (cost[w*h-1] == 1001001001) {
      cout << 0 << endl;
    }
    else {
      cout << cost[w*h-1] << endl;
    }
  }
  return 0;
}

