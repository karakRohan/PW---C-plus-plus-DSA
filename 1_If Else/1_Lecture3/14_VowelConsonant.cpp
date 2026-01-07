#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter The Character : ";
    cin >> ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "The Character Is a Vowel ";
        }
        else
        {
            cout << "The Character Is a Consonant ";
        }
    }
    // if(ascii>65 && ascii<=90){
    //     cout<<"The Character Is Uppercase Alphabet ";
    // }
    else
    {
        cout << "The Character Is Not an Alphabet ";
    }
}