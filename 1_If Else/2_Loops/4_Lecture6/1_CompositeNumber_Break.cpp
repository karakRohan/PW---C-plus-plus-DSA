#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter A Number : ";
    cin >> n;
    bool flag = true; // true means prime
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) // i is a factor of a n
        {                 
            flag = false; // false means composite
            // cout<<n<<" Is a Composite Number "<<endl;
            break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if (flag == true ) cout<<n<< " Is Prime";
    else cout<<n<<" is Composite";
}