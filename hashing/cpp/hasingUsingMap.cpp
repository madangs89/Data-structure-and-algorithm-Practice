#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter the number of element in the array" << endl;

    cin >> n;
    cout << "Enter the elements" << endl;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // adding to the map
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {

        freq[arr[i]]++;
    }

    int max = 0;
    int key = -1;

    for (auto fre : freq)
    {
        if (fre.second > max)
        {

            max = fre.second;
            key = fre.first;
        }
    }
    cout << "Element with highest frequency: " << key
         << " (occurs " << max << " times)" << endl;
    cout << "Enter the number to search in the map" << endl;
    int d;
    cin >> d;
    cout << "answer is  " << freq[d];
    return 0;
}