#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    

    // Using a Stack : [POP , ANS , PUSH] & reverse Traverse
    // SC = O(n) , TC = O(n)
    // Next Greater Element (nge) - Brute Force Approach
    int nge[n];
    stack<int> stack1;
    nge[n-1] = -1;
    stack1.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        // POP all the elements smaller than or equal to arr[i]
        while(stack1.size()>0 && stack1.top()<=arr[i]){
            stack1.pop();
        }

        // ANS [Mark the ANS is nge array]
        if(stack1.size()==0) nge[i] = -1;
        else nge[i] = stack1.top();

        // PUSH the arr[i] into the stack
        stack1.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<"  ";
    }
    cout<<endl;
}