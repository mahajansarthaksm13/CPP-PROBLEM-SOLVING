// Buzz: divisible by 7 or ends with 7
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    cout << (n % 7 == 0 || n % 10 == 7 ? "Buzz" : "Not Buzz") << '\n';
}
