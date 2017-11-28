//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

long long lcm (int a, int b) {
  long long gcd = __gcd(a, b);
  return (a * b) / gcd;
}

int main() {

  cout << lcm(3, 2);
  return 0;
}

