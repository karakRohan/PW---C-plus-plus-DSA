#include <bits/stdc++.h>
using namespace std;

class Stack
{ // User defined data structure
public:
    vector<int> v; // No Overflow condition
    Stack()
    {

    }
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.size() == 0)
        {
            cout << "Stack is Empty !!!" << endl;
            return;
        }
        v.pop_back();
    }
    int top()
    {
        if (v.size() == 0)
        {
            cout << "Stack is Empty !!!" << endl;
            return -1;
        }
        return v[v.size() - 1];
    }
    int size()
    {
        return v.size();
    }
};

int main()
{
    Stack stack1;
    cout << stack1.top() << endl; // Stack is Empty !!!
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);
    stack1.push(60);                
    cout << stack1.size() << endl;  
    cout << stack1.top() << endl;   
}