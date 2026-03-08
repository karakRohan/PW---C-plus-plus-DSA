#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int i, int arr[], int n){
    //int left = 2*i, right = 2*i + 1;
    while(true){
        int left = 2*i, right = 2*i + 1;
            if(left >= n) break; 
            if(right >= n){ // Only left child is present
                if(arr[i]>arr[left]){  
                    swap(arr[i], arr[left] );
                    i = left;
                }
                break;
            }
            if (arr[left]<arr[right]){
                if(arr[i]>arr[left]){  
                    swap(arr[i], arr[left] );
                    i = left;
                }
                else break;
            }
            else{
                if(arr[i]>arr[right]){  
                    swap(arr[i], arr[right] );
                    i = right;
                }
                else break;
            }
        }
}

int main(){
    int arr[] = {-1,10,2,14,11,1,4};
    int n = sizeof(arr)/4;
    cout<<"Before Heapify :- ";
    print(arr,n);
    for(int i=n/2; i>=1; i--){
        heapify(i, arr, n);
    }
    cout<<"After Heapify :- ";
    print(arr,n);
}