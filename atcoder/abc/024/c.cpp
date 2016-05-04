# define FOR(i,a,b) for(int i=(a);i<(b);++i)
# define REP(i,n)  FOR(i,0,n)
# include <iostream>
# include <algorithm>
# include <iterator> 
# include <cstdlib>

using namespace std;

int main() {

  int N, D, K;
  cin >> N >> D >> K;
  int L[D], R[D], S[K], T[K], step[K];
  
  REP(i, D) {
    cin >> L[i] >> R[i];
  }

  REP(i, K) {
    cin >> S[i] >> T[i];
  }
 
  REP(i, D) {

    // それぞれの民族について
    REP(j, K) {

      // 目的地にいない場合
      if (S[j] != T[j]) {
        // できるだけ近くに行く

        // 移動しきれる
        if (L[i] <= T[j] && T[j] <= R[i]) {
          S[j] = T[j];
 
        // 移動しきれない
        } else {
          step[j]++;

          // L or R
          if (abs(T[j] - L[i]) < abs(T[j] - R[i])){
            S[j] = L[i];
          } else {
            S[j] = R[i];
          }

        }

      }
    }

    // みんな移動終了していたら終わり
    bool flag = true;
    REP(i, D) {
      if (S[i] != T[i]) {
        flag = false;
        break;
      }
    }

    REP(i, D) {
      cout << i << ' ' << S[i] << ' ' << T[i] << endl;
    }

    if (flag) {
      cout << i+1 << endl;
      return 0;
    }
  }
}
