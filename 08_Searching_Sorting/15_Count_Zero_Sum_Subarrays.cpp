// Count subarrays with sum 0: prefix sum frequencies, O(n)
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    unordered_map<long long,int> freq{{0, 1}};
    long long sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        cnt += freq[sum]++;
    }
    cout << cnt << '\n';
}
