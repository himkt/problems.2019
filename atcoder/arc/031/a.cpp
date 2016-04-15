#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <memory.h>
#include <iomanip>
#include <bitset>
#include <stack>
#include <list>  

using namespace std;
 
#define pi 3.14159265359
 


int main(){
  string Name;
  cin >> Name;
  string Name2 = Name;

  std::reverse(Name2.begin(), Name2.end());

  if (Name == Name2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
