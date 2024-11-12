// C++ STL - List

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(5);    // {5}
    ls.emplace_back(2); // {5, 2}
    ls.push_front(4);   // {4, 5, 2}

    // remianing all the functions are same as vector
    // begin, end, erase, size

    return 0;
}