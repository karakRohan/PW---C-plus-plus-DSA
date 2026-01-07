#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (arr[left] < 0)
        {
            left++;
        }
        else if (arr[right] >= 0)
        {
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveNegatives(arr, n);
    cout << "Array after moving negatives to the beginning: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
