// Minimum adjacent swaps to balance [] string, greedy O(n)
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    long long swaps = 0;
    int open = 0, imbalance = 0;  // unmatched '[' so far, unmatched ']' so far
    for (char c : s) {
        if (c == '[') {
            if (imbalance > 0) { swaps += imbalance; imbalance--; }  // this '[' moves left past unmatched ']'
            else open++;
        } else {
            if (open > 0) open--;
            else imbalance++;
        }
    }
    cout << swaps << '\n';
}
