#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    int hcf =1; // hcf full from => Highest Common Factor
    // 24 60
    // i = 24,23,22,21,... 1
    for(int i=min(a,b);i>=1;i--)
    {
        if (a%i==0 && b%i==0) // i is a common factor
        {
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a;
    cout<<"Enter 1st Number : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<gcd(a,b); // gcd full from => Greatest Common Divisor
}