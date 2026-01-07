#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "raghav is a maths teacher";
    stringstream ss(str);  
    string temp;

    while(ss>>temp)
    {
        cout<<temp<<endl;
    }
}