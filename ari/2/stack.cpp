# include <stack>
# include <iostream>

using namespace std;

int main(){
  // declared a stack object
  stack<int> s;
  s.push(1);
  s.push(2);
  // return a top element in s
  printf("%d\n",s.top());
  s.pop();
  printf("%d\n",s.top());
  return 1;
}
