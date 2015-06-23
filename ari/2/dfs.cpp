#include <iostream>
using namespace std;

const int MAX_N = 1000;

int a[MAX_N];
int n, k;

bool dfs(int i, int sum){
  // when the programm have finished selecting n's elements.
  // return whether it could make k.
  if(i==n) return sum==k;
  // case that it doesn't use a[i]
  if (dfs(i+1,sum)) return true;
  // case that it uses a[i]
  if (dfs(i+1,sum+a[i])) return true;
  return false;
}

int main(){
  // begin input
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  cin >> k;
  // end input
  
  if(dfs(0,0)) cout << "YES" << endl;
  else cout << "NO" << endl;
}
