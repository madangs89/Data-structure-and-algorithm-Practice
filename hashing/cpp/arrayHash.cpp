#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int hash[10] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int q;

    cout << "Enter teh number search" << endl;

    cin >> q;
    cout << hash[q] << " Answer" << endl;
    return 0;
}