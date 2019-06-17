#include <cmath>
#include <iostream>

using namespace std;


class Solution {
public:
    long long reverse(long long x) {
        bool is_minus = x < 0;
        x = abs(x);

        long long  digit    = log10(x);
        long long  ans      = 0;
        long long  k;

        for (long long i=digit; i>=0; --i) {
            k = x / pow(10, i);
            x -= k * pow(10, i);
            ans += k*pow(10, digit-i);
        }

        long double lower_bound = pow(-2, 31);
        long double upper_bound = pow(2, 31) - 1;

        if (is_minus) ans *= -1;

        if (ans < lower_bound || upper_bound < ans) return 0;
        return ans;
    }
};

int main() {
    Solution sol = Solution();
    cout << sol.reverse(123) << endl;
    cout << sol.reverse(-12) << endl;
    cout << sol.reverse(-1000) << endl;
    cout << sol.reverse(1000) << endl;
    cout << sol.reverse(1534236469) << endl;
    return 0;
}

