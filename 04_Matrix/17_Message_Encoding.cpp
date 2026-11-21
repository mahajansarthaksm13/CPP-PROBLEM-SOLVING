// Hill-cipher style encoding: key matrix (n x n) times blocks of n letters (A=0..Z=25), mod 26
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> key(n, vector<int>(n));
    for (auto& row : key) for (int& x : row) cin >> x;
    string msg;
    cin >> msg;
    for (char& ch : msg) ch = toupper(ch);
    while (msg.size() % n) msg += 'X';  // pad
    string out;
    for (size_t b = 0; b < msg.size(); b += n)
        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = 0; j < n; j++) s += key[i][j] * (msg[b + j] - 'A');
            out += char('A' + s % 26);
        }
    cout << out << '\n';
}
