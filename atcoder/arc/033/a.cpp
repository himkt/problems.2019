# include <iostream>
using namespace std;

int main(){
  int N, ans;
  cin >> N;

  for(int i = 0; i <= N; i++){
    ans += i;
  }

  cout << ans << endl;
  return 0;
}
