// Retrieve and print every line from a file given on stdin
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string name, line;
    cout << "File name: ";
    cin >> name;
    ifstream in(name);
    if (!in) { cout << "Cannot open " << name << '\n'; return 1; }
    while (getline(in, line)) cout << line << '\n';
}
