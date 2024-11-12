// C++ STL - Pairs

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1 = {1, 5};
    std::cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << endl
         << p2.second.first << " and " << p2.second.second << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;
}