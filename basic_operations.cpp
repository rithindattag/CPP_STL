// C++ STL - Basic Operations

#include <bits/stdc++.h>
using namespace std;

int main()
{
    sort(a, a + n);           // 'a' is the starting index and 'a+n' is the next to the last element.
    sort(v.begin(), v.end()); // v.begin() points to starting index and v.end() points to the next to last element.
    sort(a + 2, a + 4);       // 'a+2' is the 3rd index and 'a+4' is the 5th index. It sorts 3rd element to 4th element.

    sort(a, a + n, greater<int>); // sorts in descending order

    int bitsCount = __builtin_popcount(num); // returns the number of bits if that num.

    vector<int> a = {1, 2, 3, 4, 5};
    int n = a.size();
    int maxi = *max_element(a.begin(), a.end()); // returns the maximum element of the array

    int mini = *min_element(a.begin(), a.end()); // returns the minimum element of the array
}