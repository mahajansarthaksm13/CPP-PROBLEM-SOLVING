// Non-template class derived from a template base instantiated with a fixed type
#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Box {
protected:
    T value;
public:
    Box(T v) : value(v) {}
    T get() { return value; }
};
class NameBox : public Box<string> {   // fixes T = string
public:
    NameBox(string n) : Box<string>(n) {}
    void shout() { cout << value << "!\n"; }
};
int main() {
    NameBox n("hello");
    cout << n.get() << '\n';
    n.shout();
}
