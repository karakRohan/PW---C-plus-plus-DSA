#include <iostream>
using namespace std;
int main()
{
    // Method - 1 //

    // int a,b,c;
    // cin>>a>>b>>c;
    // for (int i=1;i<=a;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //     cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int i=1;i<=b;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //     cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int i=1;i<=c;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //     cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Method-2 //

    int a;
    for (int k = 1; k <= 3; k++)
    {
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}