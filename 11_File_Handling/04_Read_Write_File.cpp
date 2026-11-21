// Write lines to a file, then read them back
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    {
        ofstream out("data.txt");
        out << "first line\nsecond line\nthird line\n";
    }   // closed here
    ifstream in("data.txt");
    string line;
    while (getline(in, line)) cout << line << '\n';
}
