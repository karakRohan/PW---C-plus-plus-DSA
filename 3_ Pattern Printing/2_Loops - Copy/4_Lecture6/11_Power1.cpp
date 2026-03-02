#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter Base : ";
    cin >> a;
    // cout<<"Enter Exponent : ";
    cout<<"Enter Power : ";
    cin>>b;
    int power =1;
    for (int i=1;i<=b;i++)
    {
        power = power*a;
    }
    // cout<<power;
    cout<<a<<" Raised to the power "<<b<<" is "<<power;
}