#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    int arr[50];
    int idx;

    MaxHeap(){ // Default Constructor
        idx = 1;
    }

    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;

        // Swap with parent while greater
        while(i != 1){
            int parent = i/2;

            if(arr[i] > arr[parent]){
                swap(arr[i], arr[parent]);
            }
            else break;

            i = parent;
        }
    }

    void pop(){
        idx--;
        arr[1] = arr[idx];

        int i = 1;

        while(true){
            int left = 2*i;
            int right = 2*i + 1;

            if(left > idx-1) break;

            if(right > idx-1){
                if(arr[i] < arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                break;
            }

            if(arr[left] > arr[right]){
                if(arr[i] < arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else break;
            }
            else{
                if(arr[i] < arr[right]){
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else break;
            }
        }
    }

    int size(){
        return idx-1;
    }

    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MaxHeap pq;

    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    pq.push(2);

    cout<<"Size of Max Heap :- "<<pq.size()<<endl;
    cout<<"Top Element :- "<<pq.top()<<endl;

    pq.display();

    pq.pop();

    cout<<"Size of Max Heap :- "<<pq.size()<<endl;
    cout<<"Top Element :- "<<pq.top()<<endl;

    pq.display();
}