#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter an Integer : ";
    int n;
    cin>>n;
    // if(n>0){
    //     cout<<n;
    // }
    // else{ //n<=0
    //     cout<<-n;
    // }

    if(n<0){
        n= -n;
    }
    cout<<n;
}