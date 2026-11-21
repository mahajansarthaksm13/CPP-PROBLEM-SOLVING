// Trace (diagonal sum) and normal (sqrt of sum of squares)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    long long trace = 0, sq = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> x;
            sq += (long long)x * x;
            if (i == j) trace += x;
        }
    cout << "Trace: " << trace << "\nNormal: " << sqrt((double)sq) << '\n';
}
