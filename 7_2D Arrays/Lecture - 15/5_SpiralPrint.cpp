#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "Enter Rows Of Matrix : ";
    cin >> m;

    int n;
    cout << "Enter Columns Of Matrix : ";
    cin >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // Spiral
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    int tne = n*m; //tne => Total Number Of Element
    int count =0;

    while (minr <= maxr && minc <= maxc)
    {
        // Right
        for (int j = minc; j <= maxc && count<tne; j++)
        {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;
        // if(minr>maxr || minc>maxc) break;

        // Down
        for (int i = minr; i <= maxr && count<tne; i++)
        {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;
        // if(minr>maxr || minc>maxc) break;

        // Left
        for (int j = maxc; j >= minc && count<tne; j--)
        {
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;
        // if(minr>maxr || minc>maxc) break;

        // Up
        for (int i = maxr; i >= minr && count<tne; i--)
        {
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;
    }
}