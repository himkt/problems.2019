// include headers{{{
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
/*}}}*/
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class UnionFind {
    public:
        // contain parent node_index
        // if the node_id is root, -size(group)
        vector<int> parent;
        long long root(int);
        long long size(int);

        // judging functions
        bool join(int, int);
        bool same(int, int);

        UnionFind(int x) {
            parent = vector<int>(x, -1);
        };

};


long long UnionFind::root(int node_id) {
    if (parent[node_id] < 0) return node_id;
    else return parent[node_id] = UnionFind::root(parent[node_id]);
}


long long UnionFind::size(int node_id) {
    return -parent[UnionFind::root(node_id)];
}


bool UnionFind::same(int source_node_id, int target_node_id) {
    return UnionFind::root(source_node_id) == UnionFind::root(target_node_id);
}


bool UnionFind::join(int source_node_id, int target_node_id) {
    int a = UnionFind::root(source_node_id);
    int b = UnionFind::root(target_node_id);
    if (a == b) return false;

    if (UnionFind::size(a) < UnionFind::size(b)) swap(a, b);
    parent[a] += parent[b];
    parent[b] = a;

    return true;
}


int main () {
    int n, m; cin >> n >> m;
    vector<int> a(m), b(m);
    rep (i, m) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }

    vector<long long> ans(m, 0);
    ans[m-1] = (long long)n*(n-1) / 2;
    UnionFind uf = UnionFind(n);
    for (int index = m-1; index>=1; index--) {
        if (uf.root(a[index]) != uf.root(b[index])) {
            ans[index-1] = ans[index] - uf.size(a[index])*uf.size(b[index]);
            uf.join(a[index], b[index]);
        } else {
            ans[index-1] = ans[index];
        }
    }

    rep (index, m) {
        cout << ans[index] << endl;
    }
    return 0;
}
