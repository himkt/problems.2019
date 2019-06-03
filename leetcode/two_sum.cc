// include headers{{{
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
/*}}}*/
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); ++i) {
            for (int j=0; j<nums.size(); ++j) {
                if (i == j) continue;
                if (nums[i] + nums[j] == target) {
                    vector<int> ans = {i, j};
                    return ans;
                }
            }
        }

        return {-1};
    }
};


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solver = Solution();
    vector<int> ans = solver.twoSum(nums, target);
    
    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
    return 0;
}

