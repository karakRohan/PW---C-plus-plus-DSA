// Question => Implement merge sort algorithm to sort an array of  elements in decreasing order.

#include <bits/stdc++.h>
using namespace std;

// Merge two halves in decreasing order
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    // Compare in reverse for decreasing order
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Merge sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted in decreasing order: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    return 0;
}
