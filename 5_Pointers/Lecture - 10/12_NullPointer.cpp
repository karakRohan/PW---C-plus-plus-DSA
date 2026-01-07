#include <iostream>
using namespace std;
int main()
{
    int *ptr1 = NULL; // Reserved Address
    int *ptr2 = 0;
    int *ptr3 = '\0';
    cout <<ptr1<<" "<<ptr2<<" "<<ptr3; // 0x0
    // \0 -> NULL Character --->> ASKII Value '0'.
    // char ch='\0';
    // cout<<(int)ch;
}