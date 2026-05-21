#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> st;

        std::unordered_map<char, char> pairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}

        };

        for (char c : s)
        {
            if(c == '(' || c == '{'  || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }

                if (st.top() != pairs[c])
                {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};


int main()
{
    Solution sol;

    std::cout << sol.isValid("()[]{}") << "\n";
    std::cout << sol.isValid("(]") << "\n";
    std::cout << sol.isValid("([)]") << "\n";
    std::cout << sol.isValid("{[]}") << "\n";

}

