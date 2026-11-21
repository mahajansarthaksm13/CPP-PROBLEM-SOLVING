// Write values from variables to a file, read them back into variables
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int i = 42; double d = 3.14; string s = "hello";
    { ofstream out("vars.txt"); out << i << ' ' << d << ' ' << s << '\n'; }
    int i2; double d2; string s2;
    ifstream in("vars.txt");
    in >> i2 >> d2 >> s2;
    cout << i2 << ' ' << d2 << ' ' << s2 << '\n';
}
