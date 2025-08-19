#include <bits/stdc++.h>

using namespace std;
int main()
{
    pair<int, int> p = {1, 2};
    // cout << p.first <<endl;
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    // cout << p2.second.first;
    pair<int, int> arr[] = {{1, 2}, {4, 5}};
    cout << arr[0].first;
}