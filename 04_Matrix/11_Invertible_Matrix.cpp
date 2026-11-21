// Invertible iff determinant != 0; Gaussian elimination O(n^3)
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<double>> a(n, vector<double>(n));
    for (auto& row : a) for (double& x : row) cin >> x;
    double det = 1;
    for (int c = 0; c < n; c++) {
        int p = c;
        for (int i = c + 1; i < n; i++) if (fabs(a[i][c]) > fabs(a[p][c])) p = i;
        if (fabs(a[p][c]) < 1e-12) { det = 0; break; }
        if (p != c) { swap(a[p], a[c]); det = -det; }
        det *= a[c][c];
        for (int i = c + 1; i < n; i++) {
            double f = a[i][c] / a[c][c];
            for (int j = c; j < n; j++) a[i][j] -= f * a[c][j];
        }
    }
    cout << (fabs(det) > 1e-9 ? "Invertible" : "Not Invertible") << '\n';
}
