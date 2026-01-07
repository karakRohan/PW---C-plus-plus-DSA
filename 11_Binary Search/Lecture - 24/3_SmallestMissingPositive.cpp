#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0,1, 2, 3, 4, 8, 9, 12};
    int n = 8;
    // Method - 1 Linear Approch //
    // for (int i = 0; i < n; i++)
    // {
    //     if (i != arr[i])
    //     {
    //         cout << i;
    //         break;
    //     }
    // }

    // Method - 2 Binary Search //
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==mid) low = mid + 1;
        else{
            ans = mid;
            high = mid-1;
        }
    }
    cout<<ans;
}