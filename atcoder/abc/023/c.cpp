# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int R, C, K, N, r_i, c_i;

int get_drops(vector<pair<int, int>> drops, int i, int j){
  int sum = 0;
  bool diag;

  for (int n = 0; n < N; n++){
    if (drops[n].first == i || drops[n].second == j){
      cout << i << '-' << j << endl;
      sum++;
    }
  }

  return sum;
}

int main() {
  int ans;
  vector<pair<int, int>> drops;
  cin >> R >> C >> K >> N;

  for (int i = 0; i < N; i++) {
    cin >> r_i >> c_i;
    drops.push_back(pair<int, int>(r_i, c_i));
  }


  // 行列を舐めるだけかも

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (K == get_drops(drops, i, j)) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
