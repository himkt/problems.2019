# include <iostream>
using namespace std;


int b[2][3];
int c[3][2];
int board[3][3];
int sum;



int dfs(int k) {

  // compute final score
  if(k == 9) {

    int ret = 0;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 3; j++) {
        if(board[i][j] == board[i+1][j]) ret += b[i][j];
      }
    }

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        if(board[i][j] == board[i][j+1]) ret += c[i][j];
      }
    }
    return ret;
  }


  if(k % 2 == 0) {
    int ret = 0;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if(board[i][j] == 0) {
          board[i][j] = 1;
          ret = max(ret, dfs(k + 1));
          board[i][j] = 0;
        }
      }
    }
    return ret;


  } else {
    int ret = 1e9;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if(board[i][j] == 0) {
          board[i][j] = 2;
          ret = min(ret, dfs(k + 1));
          board[i][j] = 0;
        }
      }
    }
    return ret;
  }
}


int main() {

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {

      cin >> b[i][j];
      sum += b[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {

      cin >> c[i][j];
      sum += c[i][j];
    }
  }

  int ret = dfs(0);
  cout << ret << endl;
  cout << sum - ret << endl;

  return 0;
}
