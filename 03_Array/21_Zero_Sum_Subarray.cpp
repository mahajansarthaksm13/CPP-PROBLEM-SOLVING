// Subarray with sum 0 exists? prefix sums + hash set, O(n)
#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    unordered_set<long long> seen{0};
    long long sum = 0;
    bool found = false;
    for (int i = 0; i < n && !found; i++) {
        cin >> x;
        sum += x;
        found = !seen.insert(sum).second;
    }
    cout << (found ? "Yes" : "No") << '\n';
}
