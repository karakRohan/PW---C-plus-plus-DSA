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
        // cout<<"The Character Is Lowercase Alphabet ";
        cout << "The Character Is Alphabet ";
    }
    // if(ascii>65 && ascii<=90){
    //     cout<<"The Character Is Uppercase Alphabet ";
    // }
    else
    {
        cout << "The Character Is Not an Alphabet ";
    }
}

// ** Ques : Write a program to check whether acharacter is an alphabet or not.