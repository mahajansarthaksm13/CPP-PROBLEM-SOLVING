// Elements appearing more than n/k times, hash map O(n)
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, k, x;
    cin >> n >> k;
    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++) { cin >> x; freq[x]++; }
    for (auto& p : freq)
        if (p.second > n / k) cout << p.first << ' ';
    cout << '\n';
}
