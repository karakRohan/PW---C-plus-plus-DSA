#include <bits/stdc++.h>
using namespace std;
void display(queue<int> q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    // push , pop , front , back , size , empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<"Front Element: "<<q.front()<<endl;
    // cout<<"Back Element: "<<q.back()<<endl;
    // cout<<"Size: "<<q.size()<<endl;
    // cout<<"Empty or not: "<<q.empty()<<endl;
    display(q);
    q.pop();
    display(q);  
    
}