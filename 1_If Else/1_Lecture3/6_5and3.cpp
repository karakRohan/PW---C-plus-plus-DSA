#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a Number : ";
    int n;
    cin >> n;
    // if(n%5==0 && n%3==0){
    //     cout<<"the NUmber is Divisible by 5 and 3";
    // }
    if (n % 15 == 0)
    {
        cout << "the NUmber is Divisible by 5 and 3";
    }
    else
    {
        cout << "the NUmber is Not Divisible by 5 and 3";
    }
}