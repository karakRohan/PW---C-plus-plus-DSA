#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,1,3,2,1,5,5,6,3};
    int n = 9;
    int res = 0;
    for(int i = 0;i<n;i++){
        res = res ^ arr[i];
    }
    cout<<res<<"\n";
    return 0;
}