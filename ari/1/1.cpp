# include <iostream>

using namespace std;

const int MAX_N = 50;

int main(){
  int n, m, k[MAX_N];
  cin >> n >> m;
  for(int i=0; i<n; i++){
    cin >> k[i];
  }

  bool f = false;

  for(int a=0; a<n; a++){
    for(int b=0; b<n; b++){
      for(int c=0; c<n; c++){
        for(int d=0; d<n; d++){
          if(k[a]+k[b]+k[c]+k[d]==m){
            f = true;
          }
        }
      }
    }
  }
  if (f){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}



// cinの抽出子>> の連続適用の場合、
// // コンソール等では空白文字が無視されるので、
// // そこへ数値を入力するときには、
// // スペースキー等で区切って連続入力することができる。
