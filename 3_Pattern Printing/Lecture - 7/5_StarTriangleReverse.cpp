#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No Of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // No Of Stars = n+1-i
        for (int j = 1; j <= n+1-i; j++)
        {
        cout << " * ";  
        }
        cout << endl;
    }
}