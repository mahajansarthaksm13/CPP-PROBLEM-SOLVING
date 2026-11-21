// Count how many times a word appears in a file (whitespace-separated, exact match)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string target, w;
    cout << "Word: ";
    cin >> target;
    ifstream in("data.txt");
    if (!in) { cout << "data.txt not found\n"; return 1; }
    int cnt = 0;
    while (in >> w) cnt += w == target;
    cout << target << " occurs " << cnt << " times\n";
}
