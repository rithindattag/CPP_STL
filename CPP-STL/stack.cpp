// C++ STL - Stack (LIFO)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3. 2, 1}
    st.push(5); // {5, 4, 3, 2, 1}

    cout << st.top() << endl; // prints top element '5' but doesn't perform any operation

    st.pop();                 // removes the top element '5' i.e; last inserted element
    cout << st.top() << endl; // {4}

    cout << st.size(); // size is int64_t

    cout << st.empty(); // check if the stack is empty or not
}