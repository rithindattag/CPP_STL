// C++ STL - Vectors

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5, 10); // size:5 with all elements 10
    v.push_back(5);       // Adds 5 to the vector
    v.size();             // size of the vector
    cout << v[0] << endl; // element at index '0'

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    cout << vp[0].first << " and " << vp[0].second << endl;

    vector<int> v3 = {1, 2, 3, 4, 5};
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *it << endl;
    }

    vector<int> v4 = {5, 6, 7, 8, 9};
    v4.pop_back(); // pops last element
    for (auto it : v4)
    {
        cout << it << endl;
    }

    v.erase(); // erases all the elements in the vector
    v.empty(); // check if the vector is empty or not

    return 0;
}