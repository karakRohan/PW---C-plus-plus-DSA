#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter a Number : ";
    cin >> n;
    // for (i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }
    // 1 3 5 7 9 ......

    // separate variable
    // 1 3 5 7 9 ......
    // int a=1;
    // for (int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+2;
    // }

    // 4 7 10 13 17 ......
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 3;
    }
}
