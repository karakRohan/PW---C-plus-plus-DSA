#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int LastDigit = 0;
    int sum = 0;
    while (n>0){
        LastDigit = n%10;
        sum += LastDigit;
        n/=10;
    }
    cout<<sum;
}