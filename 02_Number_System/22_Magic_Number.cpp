// Magic number: repeated digit sum reduces to 1 (digital root == 1)
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    cout << (n > 0 && n % 9 == 1 ? "Magic" : "Not Magic") << '\n';
}
