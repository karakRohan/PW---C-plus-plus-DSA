 #include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    // Previous Greater Element (nge) - Brute Force Approach
    int pge[n];

    // Using a Stack : [POP , ANS , PUSH] & forward Traverse
    // SC = O(n) , TC = O(n)
    stack<int> stack1;
    pge[0] = -1;
    stack1.push(arr[0]);
    for(int i=1;i<=n-1;i++){
        // POP all the elements smaller than or equal to arr[i]
        while(stack1.size()>0 && stack1.top()<=arr[i]){
            stack1.pop();
        }

        // ANS [Mark the ANS is pge array]
        if(stack1.size()==0) pge[i] = -1;
        else pge[i] = stack1.top();

        // PUSH the arr[i] into the stack
        stack1.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<pge[i]<<"  ";
    }
    cout<<endl;
}