#include <bits/stdc++.h>
using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int main() {

    string s = "*-A/BC-/AKL";   // Prefix Expression
    stack<string> values;

    // Traverse from right to left (important for Prefix)
    for (int i = s.length() - 1; i >= 0; i--) {

        // If operand
        if (!isOperator(s[i])) {
            string temp(1, s[i]);
            values.push(temp);
        }
        else {
            // Operator → pop two values
            string val1 = values.top(); values.pop();
            string val2 = values.top(); values.pop();

            // Form infix expression
            string ans = "(" + val1 + s[i] + val2 + ")";
            values.push(ans);
        }
    }

    cout << "Infix Expression: " << values.top() << endl;
}
