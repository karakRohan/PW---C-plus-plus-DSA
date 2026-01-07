#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0,j=0,k=0; // i = a; j = b; k = res
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }
    if(i==b.size()){  // a is at end 
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j==b.size()){  // b is at end 
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}

void mergeSort(vector<int>& v){
    int n = v.size(); //5,1,3,0,4,9,6
    if(n==1) return;
    int n1 = n/2,n2=n-n/2; // n1 = 3, n2 = 4
    vector<int> a(n1), b(n2);
    // copy pasting
    for(int i=0;i<n1;i++)
        a[i]=v[i];
    for(int i=0;i<n2;i++)
        b[i]=v[i+n1];
    // magic aka recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a,b,v);
    a.clear();
    b.clear();
}

int main() {
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n); // same as array. copy
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v); //function chalalam
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
//     int i = 0, j = 0, k = 0;
//     while (i < a.size() && j < b.size()) {
//         if (a[i] <= b[j]) {
//             res[k++] = a[i++];
//         } else {
//             res[k++] = b[j++];
//         }
//     }
//     if (i == a.size()) {
//         while (j < b.size()) {
//             res[k++] = b[j++];
//         }
//     }
//     if (j == b.size()) {  // FIX: loop with i, not j
//         while (i < a.size()) {
//             res[k++] = a[i++];
//         }
//     }
// }

// void mergeSort(vector<int>& v) {
//     int n = v.size();
//     if (n == 1) return;

//     int n1 = n / 2, n2 = n - n / 2;
//     vector<int> a(n1), b(n2);

//     for (int i = 0; i < n1; i++)
//         a[i] = v[i];
//     for (int i = 0; i < n2; i++)
//         b[i] = v[i + n1];

//     mergeSort(a);
//     mergeSort(b);

//     merge(a, b, v);
// }

// int main() {
//     int arr[] = {5, 1, 3, 0, 4, 9, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     vector<int> v(arr, arr + n);

//     cout << "Before sorting: ";
//     for (int x : v) cout << x << " ";
//     cout << "\n";

//     mergeSort(v);

//     cout << "After sorting: ";
//     for (int x : v) cout << x << " ";
// }
