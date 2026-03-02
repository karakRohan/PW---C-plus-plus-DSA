#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int fact = 1;
    for (float i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact;
}