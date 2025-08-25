#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int postion = low;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= arr[high])
        {
            swap(arr[i], arr[postion]);
            postion++;
        }
    }
    return postion - 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int arr[] = {4, 3, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
}