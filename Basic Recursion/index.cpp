#include <bits/stdc++.h>

using namespace std;

void reverseAnArray(int arr[], int start, int size)
{
    if (start >= size / 2)
    {
        return;
    }
    swap(arr[start], arr[size - start - 1]);
    reverseAnArray(arr, start + 1, size);
}
int main()
{
    int arr[] = {4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    reverseAnArray(arr, start, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}