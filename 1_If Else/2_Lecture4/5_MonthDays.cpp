// Question :- Write a program to input month number and print total number of days in month using switch case .
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Month Number : ";
    cin >> x;
    switch (x)
    {
    case 1: // Jan
        cout << "31";
        break;
    case 2: // Feb
        cout << "28";
        break;
    case 3: // Mar
        cout << "31";
        break;
    case 4: // Apr
        cout << "30";
        break;
    case 5: // May
        cout << "31";
        break;
    case 6: // June
        cout << "30";
        break;
    case 7: // July
        cout << "31";
        break;
    case 8: // Aug
        cout << "31";
        break;
    case 9: // Sept
        cout << "30";
        break;
    case 10: // oct
        cout << "31";
        break;
    case 11: // nov
        cout << "30";
    case 12: // dec
        cout << "31";
    }
}