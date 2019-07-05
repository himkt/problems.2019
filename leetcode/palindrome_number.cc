# include <iostream>
# include <cmath>


class Solution {
public:

    bool isPalindrome(int x) {
        if (x < 0) return false;

        int xs = x;
        int ys = 0;
        int k;
        int digit = log10(x);

        for (int i=digit; i>=0; --i) {
            k = xs / pow(10, i);
            ys += k * pow(10, digit-i);
            xs -= k * pow(10, i);
        }

        return x == ys;
    }
};


int main() {
    Solution sol = Solution();
    std::cout << sol.isPalindrome(101) << std::endl;
    return 0;
}
