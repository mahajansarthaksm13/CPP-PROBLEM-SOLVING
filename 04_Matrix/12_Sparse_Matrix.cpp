// Sparse matrix stored as (row, col, value) triplets
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r, c, x;
    cin >> r >> c;
    vector<int> row, col, val;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            cin >> x;
            if (x) { row.push_back(i); col.push_back(j); val.push_back(x); }
        }
    cout << "Row Col Val\n";
    for (size_t k = 0; k < val.size(); k++) cout << row[k] << ' ' << col[k] << ' ' << val[k] << '\n';
    cout << "Sparse: " << (val.size() * 2 < (size_t)r * c ? "yes" : "no") << '\n';
}
