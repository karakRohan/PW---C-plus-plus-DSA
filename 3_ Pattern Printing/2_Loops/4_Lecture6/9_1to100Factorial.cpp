#include <iostream>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    long long factorial = 1;

    for (float i = 1; i <= 100; i++)
    {
        factorial *= i;
        cout << "Factorial of " << i << " = " << factorial << endl;
    }

    return 0;
}

// #include <iostream>

// using namespace std;

// int main() {
//     int num;
//     long long factorial = 1;

//     cout << "Enter a number between 1 and 100: ";
//     cin >> num;

//     if (num < 1 || num > 100) {
//         cout << "Invalid input. Please enter a number between 1 and 100." << endl;
//         return 1;
//     }

//     for (int i = 1; i <= num; ++i) {
//         factorial *= i;
//     }

//     cout << "Factorial of " << num << " is " << factorial << endl;

//     return 0;
// }