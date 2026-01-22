#include <iostream>
using namespace std;

class Stack
{ // User defined data structure
public:
    int arr[5];
    int idx;
    Stack()
    {
        idx = -1;
    }
    void push(int val)
    {
        if (idx == sizeof(arr) / sizeof(arr[0]) - 1)
        {
            cout << "Stack is Full !!!" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack is Empty !!!" << endl;
            return;
        }
        idx--;
    }
    int top()
    {
        if (idx == -1)
        {
            cout << "Stack is Empty !!!" << endl;
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
    void display()
    {
        for (int i = 0; i <= idx; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
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
    stack1.push(60);               // Stack is Full
    cout << stack1.size() << endl; // 5
    cout << stack1.top() << endl;  // 50
    stack1.display();              // 10 20 30 40 50

    // cout<<stack1.top()<<endl;  // 40
    // cout<<stack1.size()<<endl; // 4
    // stack1.pop();  // 40
    // cout<<stack1.size()<<endl; // 3
    // cout<<stack1.top()<<endl;  // 30
}