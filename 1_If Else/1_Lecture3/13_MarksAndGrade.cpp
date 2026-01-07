#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Marks : ";
    int n;
    cin >> n;

    // 1st Method//

    // if(n>=91 && n<=100){
    //     cout<<"Out Standing";
    // }
    // else if(n>=81 && n<=90){
    //     cout<<"Excellent";
    // }
    // else if(n>=71 && n<=80){
    //     cout<<"Good";
    // }
    // else if(n>=61 && n<=70){
    //     cout<<"Can Do Better";
    // }
    // else if(n>=51 && n<=60){
    //     cout<<"Average";
    // }
    // else if(n>=40 && n<=50){
    //     cout<<"Below Average";
    // }
    // else if(n<40){
    //     cout<<"Fail";
    // }

    // 2nd Method//

    //     if (n >= 91)
    //     {
    //         cout << "Excellent";
    //     }
    //     else
    //     {
    //         if (n >= 81)
    //         {
    //             cout << "Very Good";
    //         }
    //         else
    //         {
    //             if (n >= 71)
    //             {
    //                 cout << "Good";
    //             }
    //             else
    //             {
    //                 if (n >= 61)
    //                 {

    //                     cout << "Can Do Better";
    //                 }

    //                 else
    //                 {
    //                     if (n >= 51)
    //                     {
    //                         cout << "Average";
    //                     }
    //                     else
    //                     {
    //                         if (n >= 41)
    //                         {
    //                             cout << "Below Average";
    //                         }
    //                         else
    //                         {
    //                             cout << "Fail";
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    // 3rd Method//

    if (n >= 91)
    {
        cout << "Excllent";
    }
    else if (n >= 81)
    {
        cout << "Very Good";
    }
    else if (n >= 71)
    {
        cout << "Good";
    }
    else if (n >= 61)
    {
        cout << "Can Do Better";
    }
    else if (n >= 51)
    {
        cout << "Average";
    }
    else if (n >= 41)
    {
        cout << "Below Average";
    }
    else
    {
        cout << "Fail";
    }
}