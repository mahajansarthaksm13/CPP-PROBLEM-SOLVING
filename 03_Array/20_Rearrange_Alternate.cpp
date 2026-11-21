// Alternate positive/negative keeping relative order, O(n) time O(n) space
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> pos, neg;
    for (int i = 0, x; i < n; i++) { cin >> x; (x < 0 ? neg : pos).push_back(x); }
    size_t p = 0, q = 0;
    while (p < pos.size() && q < neg.size()) cout << pos[p++] << ' ' << neg[q++] << ' ';
    while (p < pos.size()) cout << pos[p++] << ' ';
    while (q < neg.size()) cout << neg[q++] << ' ';
    cout << '\n';
}
