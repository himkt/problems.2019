# include <iostream>
# include <vector>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    vector<int> nums(3); rep (i, 3) cin >> nums[i];
    sort(nums.begin(), nums.end());
    cout << nums[2]*10+nums[1]+nums[0] << endl;
    return 0;
}

