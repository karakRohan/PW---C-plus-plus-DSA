#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Month Number : ";
    // 1 3 5 7 8 10 12 -> 31 Days
    // 4 6 9 11 -> 30 days
    // 2 -> 28 days
    cin >> x;
    // switch (x==1 || x==3 || x == 5 || x==7 || x==8 || x==10 || x==12)
    switch ((x <= 7 && x % 2 != 0) || (x >= 8 && x % 2 == 0))
    {
    case 1:
        cout << "31";
    }
    switch (x == 4 || x == 6 || x == 9 || x == 11)
    {
    case 1:
        cout << "30";
    }
    switch (x)
    {
    case 2:
        cout << "28";
    }
}