#include <iostream>
#include <bits/stdc++.h>
#include<climits>
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

    // Max Element Print 
    int max = INT_MIN;
    for (int i=0; i<=m-1;i++)
    {
        for (int j=0; j<=n-1;j++)
        {
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;
}