
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
  int N, M, a, b;
  cin >> N >> M;

  int ans[N];
  int edge[N][N];

  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++) {
      if (i == j) {
        edge[i][j] = 0;
      } else {
        edge[i][j] = 1<<28;
      }
    }
    ans[i] = 0;
  }

  for (int i = 0; i < M; i++) {
    cin >> a >> b;
    edge[a-1][b-1] = 1;
    edge[b-1][a-1] = 1;
  }


  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        edge[i][k] = min(edge[i][k], edge[i][j] + edge[j][k]);
      }
    }
  }
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (edge[i][j] == 2){
        ans[i]++;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    cout << ans[i] << endl;
  }
}
