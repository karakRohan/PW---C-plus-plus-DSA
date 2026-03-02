#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s; // This is a set of integers
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1); // This will not be added to the set as it is a duplicate
    s.insert(0);
    s.erase(3); // This will remove the element 3 from the set

    int target = 4;
    // s.find() -> it searches int the set, and if
    // it is not found then it returns the last element
    if(s.find(target) != s.end()){ // target exists
        cout<<"exists"<<endl;
    }
    else cout<<"does not exist"<<endl;

    cout<<"Array size is : "<<s.size()<<endl; // This will print the size of the set, which is 6
    // for each loop
    for(int element : s){
        cout<<element<<" ";
    }
}