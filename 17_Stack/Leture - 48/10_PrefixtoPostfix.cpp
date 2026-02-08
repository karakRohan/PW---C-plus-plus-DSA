#include <bits/stdc++.h>
using namespace std;

bool isOperator(char ch){
    return (ch=='+' || ch=='-' || ch=='*' || ch=='/');
}

int main()
{
    string s = "-/*+ABCD";   // Prefix Expression

    stack<string> values;   // same idea, শুধু string stack

    // Reverse traversal (right → left)
    for(int i = s.length()-1; i >= 0; i--)
    {
        if(!isOperator(s[i]))   // operand
        {
            string temp(1, s[i]);
            values.push(temp);
        }
        else   // operator
        {
            string val1 = values.top(); values.pop();
            string val2 = values.top(); values.pop();

            // Prefix → Postfix format:  val1 val2 operator
            string ans = val1 + val2 + s[i];
            values.push(ans);
        }
    }

    cout << "Postfix Expression : " << values.top() << endl;
}
