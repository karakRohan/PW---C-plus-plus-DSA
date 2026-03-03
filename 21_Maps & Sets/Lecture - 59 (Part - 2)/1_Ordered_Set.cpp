#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for (int element : s){
        cout<<element<<" ";
    }
}