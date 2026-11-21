// Merge a.txt and b.txt into merged.txt
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream a("a.txt"), b("b.txt");
    ofstream out("merged.txt");
    if (!a || !b) { cout << "need a.txt and b.txt\n"; return 1; }
    out << a.rdbuf();
    out << b.rdbuf();
    cout << "merged.txt written\n";
}
