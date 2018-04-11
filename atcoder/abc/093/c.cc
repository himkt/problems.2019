//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

template<typename integer>
integer __lcm(integer a, integer b) {
  return (a * b) / __gcd(a, b);
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> nums = {a, b, c};
  sort(nums.begin(), nums.end());

  rep (i, nums.size()) nums[i] -= nums[2];

  // nums[0] == nums[1] を作るために必要な最小操作数
  int ans = 0;
  ans += ((nums[1] - nums[0]) / 2) + ((nums[1] - nums[0]) % 2);

  // 2つ選んで1を足す
  ans += nums[2] - nums[1];

  if (nums[0] % 2 != nums[1] % 2) ans++;

  cout << ans << endl;
  return 0;
}

