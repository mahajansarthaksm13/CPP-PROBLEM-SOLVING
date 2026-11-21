// Overriding a base member function in derived class
#include <iostream>
using namespace std;
class Base {
public:
    void show() { cout << "Base::show\n"; }
};
class Derived : public Base {
public:
    void show() { cout << "Derived::show (overrides Base)\n"; }
};
int main() {
    Derived d;
    d.show();          // Derived version
    d.Base::show();    // explicitly call the hidden base version
}
