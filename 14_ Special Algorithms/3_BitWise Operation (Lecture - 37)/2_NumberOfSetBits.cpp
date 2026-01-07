#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n){
    return __builtin_popcount(n);
}

int count_set_bits_2(int n){
    int count = 0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
 
int main() {
    cout<<count_set_bits(453)<<"\n";
    cout<<count_set_bits_2(453)<<"\n";
    return 0;
}