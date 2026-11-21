// Read a file character by character and display it
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("data.txt");
    if (!in) { cout << "data.txt not found\n"; return 1; }
    char c;
    while (in.get(c)) cout << c;
}
