// Count pairs (i<j) with a[i]+a[j]==K, hashing O(n)
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, k, x;
    cin >> n >> k;
    unordered_map<int,int> freq;
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt += freq[k - x];
        freq[x]++;
    }
    cout << cnt << '\n';
}
