

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create vector
    vector<int> v;

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "After push_back: ";
    for (int x : v)
        cout << x << " "; // 10 20 30
    cout << endl;

    // Pop element
    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v)
        cout << x << " "; // 10 20
    cout << endl;

    // Insert at specific position
    v.insert(v.begin() + 1, 99); // insert 99 at index 1
    cout << "After insert: ";
    for (int x : v)
        cout << x << " "; // 10 99 20
    cout << endl;

    // Erase element at position
    v.erase(v.begin()); // erase first element
    cout << "After erase: ";
    for (int x : v)
        cout << x << " "; // 99 20
    cout << endl;

    // Access front, back
    cout << "Front: " << v.front() << endl; // 99
    cout << "Back: " << v.back() << endl;   // 20

    // Size and capacity
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // Resize vector
    v.resize(5, -1); // if expand, fill with -1
    cout << "After resize: ";
    for (int x : v)
        cout << x << " "; // 99 20 -1 -1 -1
    cout << endl;

    // Clear vector
    v.clear();
    cout << "After clear, Size: " << v.size() << endl;

    // Nested vector (2D)
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "2D Vector element [2][1]: " << matrix[2][1] << endl; // 8

    return 0;
}
