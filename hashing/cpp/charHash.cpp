#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int hash[256] = {0};
    // for only small letter we can use 26 of size and while hasing we can do the logic of str[i] - "a"
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;
    }
    char c = 'a';
    cout << "answer " << hash[c];
}