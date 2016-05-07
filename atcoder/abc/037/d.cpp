
# include <iostream>
# include <algorithm>
# include <vector>

using namespace std;

int main() {

  int h, w;
  cin >> h >> w;

  int a[h][w];
  int dp[h][w];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      for (int d = 0; d < h; d++) {
        for (int p = 0; p < w; p++) {
          dp[d][p] = 0;
        }
      }


    }
  }
}
