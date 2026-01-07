#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{ // T.C = (min(a,b))
    for (int i = min(a, b); i >= 2; i--)
    {
        return 1;
    }
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % a, a);
}
int main()
{
    int a = 10000;
    int b = 10001;
    cout << gcd(b, a);
}