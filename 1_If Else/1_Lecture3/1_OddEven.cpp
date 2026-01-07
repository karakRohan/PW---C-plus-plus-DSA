#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a NUmber : ";
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even";
    }
    // cout<<(n%2==0);
    // if(n%2!=0){
    //     cout<<"Odd";
    // }
    else{
        cout<<"Odd";
    }
}