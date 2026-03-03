#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);// Unordered set does not maintain any specific order of elements
    for (int element : s){
        cout<<element<<" ";
    }
}