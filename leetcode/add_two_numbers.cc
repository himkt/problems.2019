# include <iostream>
# include <cmath>


using namespace std;


class Solution {
public:
    int reverse(int x) {
        int y, z;

        // 123
        // 1. (123/100) -> 1
        //     ^^^^^^^^
        // 2. (123/10 - 10*(123/100)
        //     ++++++       ^^^^^^^
        // 3. (123/1 - 10*(123/10) - 100*(123/100)
        //                 ++++++         ^^^^^^^

        int d = log10(x) + 1;
        int r = 0;

        for (int i=d; i > 0; --i) {
            cout << i << endl;
        }

        return y;
    }
};


int main() {
    Solution solver = Solution();
    solver.reverse(123);
}
