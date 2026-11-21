// BURGERS - min(patties, buns)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << min(a, b) << '\n';
    }
}
