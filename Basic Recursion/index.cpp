#include <bits/stdc++.h>

using namespace std;

int f(int num)
{

    if (num <= 1)
    {
        return num;
    }

    return f(num - 1) + f(num - 2);
}
int main()
{
    cout << f(10);
    return 0;
}