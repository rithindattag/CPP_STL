// C++ STL - Priority Queue

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // Max Heap - Largest element always stays on top
    pq.push(5);             // {5}
    pq.push(8);             // {8, 5}
    pq.push(6);             // {8, 6, 5}

    pq.top(); // prints '8'

    pq.pop(); // {6, 5}

    pq.top(); // prints '6'

    priority_queue<int, vector<int>, greater<int>> pq; // Min Heap - Smallest element always stays on top.
    pq.push(4);                                        // {4}
    pq.push(2);                                        // {2, 4}
    pq.push(6);                                        // {2, 4, 6}

    pq.top(); // prints '2'

    pq.pop(); // {4, 6}

    pq.top(); // prints '4'
}