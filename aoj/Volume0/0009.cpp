#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
const int MAX = 1000000;
int data[MAX];
vector<int> V;

void make(){
  fill(data,data+MAX,1);

  for(int i = 2; i*i < 1000000; i++){
    if(data[i] == 1){
      for(int j = i*2; j < 1000000; j+=i) data[j] = 0;
    }
  }
  V.push_back(2);
  for(int i = 3; i < MAX; i+=2)
    if(data[i]) V.push_back(i);
}

int main(){
  make();
  int in;
  while(cin >> in){ 
    cout << upper_bound(V.begin(),V.end(),in)-V.begin() << endl;
  }
  return 0;
}
