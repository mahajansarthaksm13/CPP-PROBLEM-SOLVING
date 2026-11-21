// Sum and product of all matrix elements
#include <iostream>
using namespace std;
int main() {
    int r, c; long long x, sum = 0, prod = 1;
    cin >> r >> c;
    for (int i = 0; i < r * c; i++) { cin >> x; sum += x; prod *= x; }
    cout << "Sum: " << sum << "\nProduct: " << prod << '\n';
}
