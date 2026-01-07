#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "Enter The No Of Rows/Columns : ";
    cin >> m;
    int arr[m][m];
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // Print
    for (int i = 0; i <= m - 1; i++) // Rows
    {
        for (int j = 0; j <= m - 1; j++) // Column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Transpose In The Same Matrix
    for (int i = 0; i <= m - 1; i++) // Rows
    {
        for (int j = i+1; j <= m - 1; j++) // Column
        {
            // Swapping Of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Printing Matrix
    for (int i = 0; i <= m - 1; i++) // Rows
    {
        for (int j = 0; j <= m - 1; j++) // Column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}