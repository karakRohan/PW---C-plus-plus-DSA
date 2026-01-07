#include <iostream>
using namespace std;
int a=9; // Global Variable
void fun(int x, int y)
{
    cout << "Address Of Fun x " << &x << endl;
    cout << "Address Of Fun y " << &y << endl;
}
void f(){
    cout<<a;
}
int main()
{
     cout<<a+7<<endl;
     f();
}