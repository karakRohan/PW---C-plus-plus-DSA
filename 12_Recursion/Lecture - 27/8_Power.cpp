#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){ // Iteration Solution // 
    int p = 1;
    for(int i=1;i<=b;i++){
        p *= a;
    }
    return p;
}
int pow(int a, int b){ // Recursive Solution //
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a;
    cout<<"Enter Base : ";
    cin>>a;

    int b;
    cout<<"Enter Exponent : ";
    cin>>b;
    cout<<a<<" Raised to the power "<<b<<" is "<<pow(a,b);
}