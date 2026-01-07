#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    // if(x%2==0){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }

    // Condition ? true : flase
    (x%2==0) ? cout<<"Even" : cout<<"Odd";
}