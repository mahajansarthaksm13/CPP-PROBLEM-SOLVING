// Duplicate in array of n+1 ints in [1..n]: Floyd cycle detection, O(n) time O(1) space
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int len;
    cin >> len;  // number of elements (= n+1)
    vector<int> a(len);
    for (int& x : a) cin >> x;
    int slow = a[0], fast = a[0];
    do { slow = a[slow]; fast = a[a[fast]]; } while (slow != fast);
    slow = a[0];
    while (slow != fast) { slow = a[slow]; fast = a[fast]; }
    cout << slow << '\n';
}
