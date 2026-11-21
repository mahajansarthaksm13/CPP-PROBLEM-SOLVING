// Spiral order traversal, O(r*c)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> m(r, vector<int>(c));
    for (auto& row : m) for (int& x : row) cin >> x;
    int top = 0, bot = r - 1, left = 0, right = c - 1;
    while (top <= bot && left <= right) {
        for (int j = left; j <= right; j++) cout << m[top][j] << ' ';
        top++;
        for (int i = top; i <= bot; i++) cout << m[i][right] << ' ';
        right--;
        if (top <= bot) { for (int j = right; j >= left; j--) cout << m[bot][j] << ' '; bot--; }
        if (left <= right) { for (int i = bot; i >= top; i--) cout << m[i][left] << ' '; left++; }
    }
    cout << '\n';
}
