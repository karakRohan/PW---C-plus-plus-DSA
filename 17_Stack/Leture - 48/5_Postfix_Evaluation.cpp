#include <bits/stdc++.h>
using namespace std;

int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}

int main()
{
    string s = "79+4*8/3-"; // Postfix Expression
    // We need onr stacks -> values
    stack<int> values;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {                           // Digit
            values.push(s[i] - 48); // Convert char to int and push into values stack
        }
        else
        { // s[i] it is -> *, /, +, -
            // Kaam karo
            int val2 = values.top();
            values.pop();
            int val1 = values.top();
            values.pop();
            int ans = solve(val1, val2, s[i]);
            values.push(ans);
        }
    }

    
    cout << "The Result of Postfix Evaluation is : " << values.top() << endl;
}