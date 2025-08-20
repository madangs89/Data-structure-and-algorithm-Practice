#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digit = 123;
    string st = "";
    while (digit > 0)
    {
        st += to_string(digit % 10);
        digit = digit / 10;
    }
    cout << st;
    return 0;
}