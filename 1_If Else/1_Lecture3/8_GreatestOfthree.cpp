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
    if (a > b && a > c)
    {
        cout << a << "Is Largest";
    }
    if (b > a && b > c)
    {
        cout << b << "Is Largest";
    }
    if(c>a && c>b){
        cout<<c<<"Is Largest";
    }
}

//Ques : Take 3 positive integers input and print the greatest of them.