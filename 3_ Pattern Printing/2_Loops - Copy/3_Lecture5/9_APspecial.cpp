#include <iostream>
using namespace std;
int main()
{
    // int i, n;
    // cout << "Enter a Number : ";
    // cin >> n;
    // 100 97 94 ..... 7 4 1 -> 34 Terms
    int a = 100;
    // for (int i = 1; i <= 34; i++)
    for (;a>0;)
    {
        cout << a << endl;
        a = a - 3;
    }
}