#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "Enter The No Of Rows : ";
    cin >> m;

    int n;
    cout << "Enter The No Of Columns : ";
    cin >> n;

    int arr[m][n];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    // Print
    for (int i = 0; i <= m - 1; i++) // Rows
    {
        for (int j = 0; j <= n - 1; j++) // Column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Printing Transpose
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}