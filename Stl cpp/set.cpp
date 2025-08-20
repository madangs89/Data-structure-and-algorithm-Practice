#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sets
    // sets stores in the sorted order and also only unique elements
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
   s1.erase(1); 
    for (int x : s1)
    {
        cout << x << " ";
    }
    return 0;
}