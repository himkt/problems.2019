#include <iostream>
using namespace std;

const int MAX_N = 20;
int a[MAX_N]={1,2,4,7};
int n=4, k=13;

bool dfs(int i, int sum){
  if(i == n){
    return sum == k;
  }

  if(dfs(i+1, sum)){
    return true;
  }

  if(dfs(i+1, sum + a[i])){
    return true;
  }

  return false;
}

void solve(){
  if(dfs(0,0)){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}

int main(){
  solve();
  return 0;
}
