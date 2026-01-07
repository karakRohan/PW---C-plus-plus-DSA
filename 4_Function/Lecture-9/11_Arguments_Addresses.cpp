#include <iostream>
using namespace std;
void fun(int x, int y)
{
    cout << "Address Of Fun x " << &x << endl;
    cout << "Address Of Fun y " << &y << endl;
}
int main()
{
    int x =3;
    int y =7;
    cout << "Address Of Main x " << &x << endl;
    cout << "Address Of Main y " << &y << endl;
    fun(x, y);
}