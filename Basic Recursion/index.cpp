#include <bits/stdc++.h>

using namespace std;

int number = 0;

void f()
{
    cout << number << endl;
    number++;
    if (number < 10)
    {
        f();
    }
}
int main()
{
    f();
    return 0;
}