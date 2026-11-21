// Store user-entered lines into a file until "end"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream out("store.txt");
    string line;
    cout << "Enter lines (type end to stop):\n";
    while (getline(cin, line) && line != "end") out << line << '\n';
    cout << "Saved to store.txt\n";
}
