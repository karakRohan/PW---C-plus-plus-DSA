#include <bits/stdc++.h>
using namespace std;
bool isPlaindrome(string s, int i, int j){
    if(i>j) return true;
    if(s[i] != s[j]) return false;
    else return isPlaindrome(s,i+1,j-1);
}
int main()
{
    string s = "mom";
    cout<<isPlaindrome(s,0,s.length()-1);
}