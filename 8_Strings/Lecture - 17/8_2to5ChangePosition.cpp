#include<bits/stdC++.h>
// #include<iostream>
// #include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //Then Reverse First Half
    int n = s.length();
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
}