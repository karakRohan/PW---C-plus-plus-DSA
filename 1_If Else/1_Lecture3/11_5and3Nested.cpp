#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number : ";
    int n;
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "Number is Divisible By 5 and 3 both";
        }
        else // n%5==0 but n & 3 !=0
        {
            // cout << "Not Matching Condition";
            cout << "Number is Divisible By 5 But not 3";
        }
    }
    else
    {
        cout << "Not Matching Condition";
    }
}