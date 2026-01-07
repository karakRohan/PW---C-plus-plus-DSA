#include <iostream>
using namespace std;
int main()
{
    cout << "Enter 1st Number : ";
    int a, b, c;
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "Enter 3rd Number : ";
    cin >> c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<","<<b<<","<<c<<"Can Be The Sides Of A triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}