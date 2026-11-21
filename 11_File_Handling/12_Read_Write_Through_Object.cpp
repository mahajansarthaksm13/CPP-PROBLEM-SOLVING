// Write an object's fields to a text file and read them back into another object
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Item {
    string name; int qty; double price;
    void write(ostream& o) const { o << name << ' ' << qty << ' ' << price << '\n'; }
    void read(istream& i) { i >> name >> qty >> price; }
    void show() const { cout << name << " x" << qty << " @ " << price << '\n'; }
};
int main() {
    Item a{"pen", 10, 2.5};
    { ofstream out("item.txt"); a.write(out); }
    Item b;
    ifstream in("item.txt");
    b.read(in);
    b.show();
}
