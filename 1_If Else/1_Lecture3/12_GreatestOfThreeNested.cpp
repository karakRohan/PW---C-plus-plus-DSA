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
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " Is Greatest";
        }
        else // c>a,a>b -> c>a>b
        {
            cout << c << " Is Greatest";
        }
    }
    else // b>a
    {
        if (b > c)
            cout << b << " Is Greatest ";
        else // c>b>a
        {
            cout << c << " Is Greatest";
        }
    }
}