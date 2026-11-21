// Doolittle LU decomposition (L unit lower, U upper), O(n^3)
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<double>> a(n, vector<double>(n)), L(n, vector<double>(n, 0)), U(n, vector<double>(n, 0));
    for (auto& row : a) for (double& x : row) cin >> x;
    for (int i = 0; i < n; i++) {
        for (int k = i; k < n; k++) {           // U row i
            double s = 0;
            for (int j = 0; j < i; j++) s += L[i][j] * U[j][k];
            U[i][k] = a[i][k] - s;
        }
        for (int k = i; k < n; k++) {           // L column i
            if (i == k) { L[i][i] = 1; continue; }
            double s = 0;
            for (int j = 0; j < i; j++) s += L[k][j] * U[j][i];
            L[k][i] = (a[k][i] - s) / U[i][i];
        }
    }
    cout << fixed << setprecision(3) << "L:\n";
    for (auto& row : L) { for (double x : row) cout << x << ' '; cout << '\n'; }
    cout << "U:\n";
    for (auto& row : U) { for (double x : row) cout << x << ' '; cout << '\n'; }
}
