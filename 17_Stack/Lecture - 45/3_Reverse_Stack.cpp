#include <bits/stdc++.h>
// #include<stack>
using namespace std;
void print(stack<int> stack1)
{
    stack<int> temp;
    while (stack1.size()>0)
    {
        temp.push(stack1.top());
        stack1.pop();
    }

    // Putting elements back from temp to stack
    while(temp.size()>0)
    {
        cout<<temp.top()<<" ";
        stack1.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);

    print(stack1);

    stack<int> gt;
    stack<int> rt;
    // Empty stack1 into gt
    while(stack1.size()>0)
    {
        gt.push(stack1.top());
        stack1.pop();
    }
    // Empty gt into rt
    while(gt.size()>0)
    {
        rt.push(gt.top());
        gt.pop();
    }
    // Empty rt into stack1
    while(rt.size()>0)
    {
        stack1.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    print(stack1);
}

