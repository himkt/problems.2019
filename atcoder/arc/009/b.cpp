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


// %% NOTE : begin matrix %%

typedef vector<int> vec;
typedef vector<vec> mat;
vector<char> order(10);

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

// %% NOTE : end matrix %%


// string[i] is char...
bool compare(string a, string b) {

  if (a.size() != b.size()) {
    return a.size() < b.size();
  }

  rep (i, a.size()) {
    if (a[i] != b[i]) {
      rep (j, order.size()) {
        if (a[i] == order[j]) return true;
        if (b[i] == order[j]) return false;
      }
    }
  }

  return false;
}




int main() {
  rep (i, 10) {
    cin >> order[i];
  }
  
  int n;
  cin >> n;

  vector<string> nums(n);

  rep (i, n) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end(), compare);

  rep (i, nums.size()) {
    cout << nums[i] << endl;
  }
}
