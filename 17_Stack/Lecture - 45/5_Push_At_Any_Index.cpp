#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index, value;
    cout << "Enter index to insert: ";
    cin >> index;

    cout << "Enter value to insert: ";
    cin >> value;

    // Shift elements to the right
    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[index] = value;
    n++;

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
