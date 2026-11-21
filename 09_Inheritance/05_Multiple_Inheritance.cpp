// Multiple inheritance: one derived, two bases
#include <iostream>
using namespace std;
class Printer { public: void print() { cout << "Printing\n"; } };
class Scanner { public: void scan() { cout << "Scanning\n"; } };
class AllInOne : public Printer, public Scanner {};
int main() {
    AllInOne m;
    m.print();
    m.scan();
}
