#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, x;
    cout << "Enter Size Of Array: ";
    cin >> n;

    int arr[n];
    
    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of x: ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    cout << "Number of elements greater than " << x << " is: " << count << endl;
    return 0;
}
