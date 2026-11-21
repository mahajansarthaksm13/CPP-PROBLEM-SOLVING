// seekg / tellg / seekp / tellp demo
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    fstream f("ptr.txt", ios::out | ios::in | ios::trunc);
    f << "0123456789";
    cout << "put pointer after write: " << f.tellp() << '\n';
    f.seekg(3);                              // absolute
    cout << "char at 3: " << (char)f.get() << ", get pointer now " << f.tellg() << '\n';
    f.seekg(-2, ios::end);                   // relative to end
    cout << "char at end-2: " << (char)f.get() << '\n';
    f.seekg(2, ios::cur);                    // relative to current
    cout << "get pointer after +2: " << f.tellg() << '\n';
    f.seekp(5);                              // overwrite in the middle
    f << "XY";
    f.seekg(0);
    string s; f >> s;
    cout << "file now: " << s << '\n';
}
