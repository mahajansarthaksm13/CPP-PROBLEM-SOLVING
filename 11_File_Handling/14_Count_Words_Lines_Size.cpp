// Count words, lines and total size (bytes) of a file
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main() {
    ifstream in("data.txt", ios::binary);
    if (!in) { cout << "data.txt not found\n"; return 1; }
    long long lines = 0, words = 0;
    string line, w;
    while (getline(in, line)) {
        lines++;
        istringstream ss(line);
        while (ss >> w) words++;
    }
    in.clear();
    in.seekg(0, ios::end);
    cout << "Lines: " << lines << "\nWords: " << words << "\nSize: " << in.tellg() << " bytes\n";
}
