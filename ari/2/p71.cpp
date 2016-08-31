# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;


// %% begin matrix %%

typedef vector<int> vec;
typedef vector<vec> mat;

void pretty_print(mat g) {
  rep (i, g.size()) {
    rep (j, g[0].size()-1) {
      cout << g[i][j] << ' ';
    }
    cout << g[i][g[0].size()-1] << endl;
  }
}


mat mul(mat A, mat B) {
  mat C(A.size(), vec(B.size()));
  rep (i, A.size()) {
    rep (k, B.size()) {
      rep (j, B[0].size()) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}

// %% end matrix %%


int heap[1000], sz = 0;

void push(int x) {
  int i = sz++;

  while (i>0) {
    int p = (i-1) / 2;

    if (heap[p] <= x) break;

    heap[i] = heap[p];
    i = p;
  }

  heap[i] = x;
}


// O(1) to find the minimum elements
int pop() {
  int ret = heap[0];
  int x = heap[--sz];
  int i = 0;

  while (i*2 + 1 < sz) {
    int a = i*2 + 1, b = i*2 + 2;

    if (b < sz && heap[b] < heap[a]) a = b;
    if (heap[a] >= x) break;

    heap[i] = heap[a];
    i = a;
  }

  heap[i] = x;

  return ret;
}

int main() {

}
