#include <bits/stdc++.h>
using namespace std;

class CustomClass
{
    string name;
    int account_number;
    int balance;

public:
    // Default constructor
    CustomClass()
    {
        name = "Rohan";
        account_number = 5;
        balance = 100000;
    }
    // Parameterized constructor
    CustomClass(string n, int b, int c)
    {
        name = n;
        account_number = b;
        balance = c;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){ 
    CustomClass a1; // Default constructor is called
    CustomClass a2("Rohit", 10, 50000); // Parameterized constructor is called
    a1.display();
    a2.display();
}