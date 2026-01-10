// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of Array : ";
    cin >> n;
    int arr[n];
    // input
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter The Element You Want To Search : ";
    cin >> x;
    // Search
    // check mark
    bool flag = false; // false means --> Element Is Not Present
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
            flag = true;
    }
    if (flag == true)
        cout << "Element Found";
    else
        cout << "404 Element Not Found";
}