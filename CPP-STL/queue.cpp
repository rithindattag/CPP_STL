// C++ STL - Queue (FIFO)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}

    q.front(); // prints first elements in the queue '1'

    q.pop();   // {2, 3}
    q.front(); // prints '2'

    q.size(); // Size: 2
}