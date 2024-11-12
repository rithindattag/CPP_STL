// C++ STL - Set

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;  // SET - Unique elements in sorted order
    st.insert(3); // {3}
    st.insert(5); // {3, 5}
    st.insert(3); // {3, 5}
    st.insert(4); // {3, 4, 5}

    // begin(), end(), size(), empty() also applies here.

    // {3, 4, 5, 6}
    auto it = st.find(4); // return iterator pointing to the address of that elements

    st.erase(5); // {3, 4, 6}

    st.count(4); // If exists returns '1' always(bcoz only 1 unique element exists), if not '0'
}