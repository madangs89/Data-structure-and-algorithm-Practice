#include <bits/stdc++.h>

using namespace std;
int main()
{
    // similar as vector but we can do front push
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    for (int x : l)
    {
        cout << x << " ";
    }
}