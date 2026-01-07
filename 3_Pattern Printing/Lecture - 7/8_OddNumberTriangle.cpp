#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No Of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // First "i" Odd Numbers
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a += 2;
        }
        cout << endl;
    }
}