#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int LastDigit = 0;
    int revers = 0;
    while (n>0){
        revers *= 10;
        LastDigit=n%10;
        revers += LastDigit;
        n/=10;
    }
    cout<<revers;
}