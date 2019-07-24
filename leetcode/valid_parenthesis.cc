#include <assert.h>
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> char_stack;  // accepts ( and )

        for (char c: s) {
            if (c == '(') char_stack.push(c);
            if (c == ')') {
                if (char_stack.empty() || char_stack.top() != '(') return false;
                else char_stack.pop();
            }

            if (c == '{') char_stack.push(c);
            if (c == '}') {
                if (char_stack.empty() || char_stack.top() != '{') return false;
                else char_stack.pop();
            }

            if (c == '[') char_stack.push(c);
            if (c == ']') {
                if (char_stack.empty() || char_stack.top() != '[') return false;
                else char_stack.pop();
            }
        }

        return char_stack.empty();
    }
};


int main() {
    Solution solver = Solution();
    assert(solver.isValid("{[]}"));
    assert(!solver.isValid("{]}"));
    assert(solver.isValid("()[]{}"));
    assert(!solver.isValid("([)]"));
    assert(!solver.isValid("["));
    cout << "All checks are passed" << endl;
    return 0;
}

