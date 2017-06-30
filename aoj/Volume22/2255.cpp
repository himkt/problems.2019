#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<char> ops{'+', '-', '*', '/'};


auto is_op(char c) -> bool {
  auto&& it = find(ops.begin(), ops.end(), c);
  return it != ops.end();
}

auto eval(int a, char op, int b) -> int {
  // cout << a << " " << op << " " << b << endl;
  if(op == '+') return a + b;
  else if(op == '*') return a * b;
  else if(op == '-') return a - b;
  else if(op == '/') return a / b;
}

auto expr(set<int> a, set<int> b, char op) -> set<int> {
  set<int> res;
  for(auto it = a.begin(); it != a.end(); ++it) {
    for(auto b_it = b.begin(); b_it != b.end(); ++b_it) {
      if(*b_it == 0 && op == '/') continue;
      res.insert(eval(*it, op, *b_it));
      // cout << eval(*it, op, *b_it) << endl;
    }
  }
  return res;
}

auto calc(string s) -> set<int> {
  set<int> result[11][11];
  vector<int> op_pos;
  vector<char> expr_ops;
  set<int> nums[256];

  string num = "";
  // cout << "s => " << s << endl;

  int idx = 0;
  for(int i=0; i<s.size(); ++i) {
    // cout << "s[i] " << s[i] << endl;
    if(s[i] == '(') {
      int cnt = 1;
      for(int j=i+1;j<s.size(); ++j) {
        if(s[j]=='(') cnt++;
        if(s[j]==')') cnt--;
        if(s[j]==')' && cnt==0) {
          nums[idx++] = calc(s.substr(i+1, j-i-1));
          i = j;
          break;
        }
      }
    }
    else if(is_op(s[i])) {
      op_pos.push_back(i);
      expr_ops.push_back(s[i]);
      // cout << "num " << num << endl;
      if(num != "")
        nums[idx++].insert(stoll(num));
      num = "";
    } else num += s[i];
  }
      // cout << "num " << num << endl;
  if(num != "") nums[idx++].insert(stoll(num));

  for(int i = 0; i<idx; ++i){
    result[i][i] = nums[i];
  }
  for(int j=1; j<idx; ++j) {
    for(int i=0; i<idx; ++i) {
      if(i+j >= idx)break;
      for(int k=0; k<j; ++k) {
        //cout << "i" << i << " i+k" << i+k << "     i+k+1" << i+k+1 << " i+j: " << i+j << " k " << k << endl;
        //cout << result[i][i+k].size()<< " , " << result[i+k+1][i+j].size() << endl;
        auto&& tmp = expr(result[i][i+k], result[i+k+1][i+j], expr_ops[i+k]);
        for(auto e : tmp) result[i][i+j].insert(e);
        //cout << "result: " << result[i][i+j].size() << endl;
      }
    }
  }

  // for(int i= 0; i < idx; ++i){
  //   cout << "i: " << i << endl;
  //   for(int j = i; j < idx; ++j){
  //     cout << result[i][j].size() << endl;
  //   }
  // }

  return result[0][idx-1];
}

auto rec(string target) -> void {
}

auto main() -> signed {
  string s;
  while(cin>>s, s!="#") {
    cout << calc(s).size() << endl;
  }
}
