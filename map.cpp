// C++ STL - Map

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp; // Key-Value pairs in unique, sorted order
    map<int, pair<int, int>> mp2;
    map<pair<int, int>, int> mp3;

    mp[1] = 2;         // [{1, 2}]
    mp.insert({3, 1}); // [{1, 2}, {3, 1}]
    mp.insert({2, 4}); // [{1, 2}, {2, 4}, {3, 1}]

    for (auto it : mp)
    {
        cout << it.first << it.second << endl;
    }

    // [{1, 2}, {2, 4}, {3, 1}]
    auto it = mp.find(3);       // returns iterator at that position
    cout << it->first << endl;  // '3'
    cout << it->second << endl; // '1'

    unordered_map<int, int> up; // Same as map but not in sorted order but still unique
}