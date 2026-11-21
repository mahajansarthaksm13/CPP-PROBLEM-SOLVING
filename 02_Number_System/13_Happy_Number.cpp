// Happy number: iterate digit-square sum; Floyd cycle detection, O(1) space
#include <iostream>
using namespace std;
long long next(long long n) { long long s = 0; for (; n; n /= 10) s += (n % 10) * (n % 10); return s; }
int main() {
    long long n;
    cin >> n;
    long long slow = n, fast = n;
    do { slow = next(slow); fast = next(next(fast)); } while (slow != fast);
    cout << (slow == 1 ? "Happy" : "Unhappy") << '\n';
}
