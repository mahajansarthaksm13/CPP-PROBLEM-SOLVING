// Copy source.txt to copy.txt
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("source.txt", ios::binary);
    if (!in) { cout << "source.txt not found\n"; return 1; }
    ofstream("copy.txt", ios::binary) << in.rdbuf();
    cout << "copy.txt written\n";
}
