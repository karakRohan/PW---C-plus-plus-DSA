#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    m[2] = 20;
    m[3] = 10;
    m[1] = 30;
    for (auto element : m){
        cout<<element.first<<" "<<element.second<<endl;
    }
}