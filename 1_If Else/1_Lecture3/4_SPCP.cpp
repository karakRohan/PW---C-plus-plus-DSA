#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter The Cost price : ";
    int cp;
    cin>>cp;
    cout<<"Enter The Selling Price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    // else{
    //     cout<<"Loss";
    // }
    if(cp>sp){
        cout<<"Loss = "<<cp-sp;
    }
    if(sp==cp){
        cout<<"No Profit, No Loss!";
    }
}