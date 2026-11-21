// Base pointer + virtual destructor: correct cleanup of derived through base pointer
#include <iostream>
using namespace std;
class Base {
public:
    Base() { cout << "Base ctor\n"; }
    virtual ~Base() { cout << "Base dtor\n"; }
    virtual void hello() { cout << "Base hello\n"; }
};
class Derived : public Base {
public:
    Derived() { cout << "Derived ctor\n"; }
    ~Derived() { cout << "Derived dtor\n"; }
    void hello() override { cout << "Derived hello\n"; }
};
int main() {
    Base* p = new Derived;
    p->hello();
    delete p;   // virtual dtor => Derived dtor then Base dtor
}
