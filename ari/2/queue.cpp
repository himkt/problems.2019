# include <queue>
# include <iostream>

using namespace std;

int main(){
  // declared a queue object
  queue<int> que;
  que.push(1);
  que.push(1);
  // return a reference to the next element in que
  printf("%d\n",que.front());
  que.pop();
  printf("%d\n",que.front());
  return 0;
}
