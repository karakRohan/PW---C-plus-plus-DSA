#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    stack<char> st;
    st.push(s[0]);
    for(int i = 0; i < s.length(); i++)
    {
          if(s[i]!=st.top()) st.push(s[i]);
    }
}

int main()
{
    string s = "aaabcddaabffg";
    cout << s << endl;
    s = removeDuplicates(s);
    cout << s << endl;
}

// 1 = True
// 0 = False