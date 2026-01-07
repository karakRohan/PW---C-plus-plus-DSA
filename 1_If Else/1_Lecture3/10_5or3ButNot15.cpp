#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number : ";
    int n;
    cin >> n;
    // if ((n % 5 == 0 || n % 3 == 0) && n%15!=0)
    // {
    //     cout << "The NUmber is Divisible by 5 or 3 but not 15";
    // }
    // else
    // {
    //     cout << "Not Matching Condition";
    // }
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            cout << "The NUmber is Divisible by 5 or 3 but not 15";
        }
        else
        {
            cout << "Not Matching Condition";
        }
    }
    else
    {
        cout << "Not Matching Condition";
    }
}

// Ques : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.