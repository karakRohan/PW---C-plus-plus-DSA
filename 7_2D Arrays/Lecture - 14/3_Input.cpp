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
    for(int i=0;i<=m-1;i++)
    {
        for (int j=0;j<=n-1;j++)
        {
            cin>>arr[i][j];
        }
    }

    // Print
    for(int i=0;i<=m-1;i++)
    {
        for (int j=0;j<=n-1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}