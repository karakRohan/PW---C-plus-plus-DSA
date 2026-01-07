#include<bits/stdc++.h>
using namespace std;
void ZigZag(int n){
    if(n==0) return;
    cout<<n;
    ZigZag(n-1);
    cout<<n;
    ZigZag(n-1);
    cout<<n;
}
int main(){
    cout<<endl;
    ZigZag(4);
    cout<<endl;
}