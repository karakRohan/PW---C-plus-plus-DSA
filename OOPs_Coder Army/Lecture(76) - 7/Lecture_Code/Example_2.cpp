#include <iostream>
#include<exception>
using namespace std;

/*
class exception
{
protected:
    string msg;

public:
    exception(string msg)
    {
        this->msg = msg;
    }

    string what()
    {
        return msg;
    }
};
*/


int main()
{
    try
    {
        size_t n = 1000000000000ULL;   // correct type
        
        int *p = new int[n];
        
        cout << "Memory allocation is successful\n";
        
        delete[] p;
    }
    catch (const bad_alloc &e)
    {
        cout << "Exception Occured: " << e.what() << endl;
    }
    return 0;
}