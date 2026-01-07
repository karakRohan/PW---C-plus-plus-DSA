#include <iostream>
using namespace std;
int main()
{
    // int x = 6;
    // int y = 7;
    // int *p1 = &x;
    // int *p2 = &y;
    // cout << *p1 + *p2;

    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "Enter 1st Number : ";
    cin >> *p1;
    cout << "Enter 2nd Number : ";
    cin >> *p2;
    cout << *p1 + *p2;
    // cout << x+y;  ..... ata korle cholbe kintu ata pointer diye korte bollacha
}