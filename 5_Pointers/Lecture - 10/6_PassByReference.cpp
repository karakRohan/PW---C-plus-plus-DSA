#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
    return ;
}
int main ()
{
    int a,b;
    cout<<" Enter a 1st Number : ";
    cin>>a;
    cout<<" Enter a 2nd Number : ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}