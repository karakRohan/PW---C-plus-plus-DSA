#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "No Of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n-i; j++)
        {
            cout <<" ";
        }

        // Stars
        for(int k=1;k<=i;k++)
        {
            cout<<k;
        }
        cout << endl;
    }
}