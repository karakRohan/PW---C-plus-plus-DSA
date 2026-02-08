#include <bits/stdc++.h>
using namespace std;

string solve(string val1, string val2, char ch)
{
    // prefix to infix format:  (val1 operator val2)
    // Infix format:  (val1 operator val2)
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}

int main()
{
    string s = "-/*+79483"; // Prefix Expression
    // We need onr stacks -> values
    stack<string> values;
    for (int i = s.length() - 1; i >= 0; i--) // Reverse Looping
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= 48 && s[i] <= 57)
        {                           // Digit
            values.push(to_string(s[i] - 48)); // Convert char to int and push into values stack
        }
        else
        { // s[i] it is -> *, /, +, -
            // Kaam karo
            string val1 = values.top();
            values.pop();
            string val2 = values.top();
            values.pop();
            string ans = solve(val1, val2, s[i]);
            values.push(ans);
        }
    }

    
    cout << "The Result of Prefix Evaluation is : " << values.top() << endl;
}