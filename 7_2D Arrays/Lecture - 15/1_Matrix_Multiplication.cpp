#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "Enter Rows Of 1st Matrix : ";
    cin >> m;

    int n;
    cout << "Enter Columns Of 1st Matrix : ";
    cin >> n;

    int p;
    cout << "Enter Rows Of 2nd Matrix : ";
    cin >> p;

    int q;
    cout << "Enter Columns Of 2nd Matrix : ";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        cout << "Enter Elements Of 1st Matrix : ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        int b[p][q];
        cout << "Enter Elements Of 2nd Matrix : ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        // Resultant Matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // Multiply = res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ....
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout<<endl; 
        // print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j]<<" ";
            }
            cout << endl;
        }
    }
    else // n!=p
    {
        cout << "THe Matrices Cannot Be Multiplied";
    }
}