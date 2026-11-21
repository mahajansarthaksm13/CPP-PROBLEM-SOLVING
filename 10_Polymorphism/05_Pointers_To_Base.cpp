// Base pointer to derived object: virtual calls dispatch to derived, non-virtual to base
#include <iostream>
using namespace std;
class Base {
public:
    void plain() { cout << "Base::plain\n"; }
    virtual void poly() { cout << "Base::poly\n"; }
    virtual ~Base() {}
};
class Derived : public Base {
public:
    void plain() { cout << "Derived::plain\n"; }
    void poly() override { cout << "Derived::poly\n"; }
};
int main() {
    Base* p = new Derived;
    p->plain();   // Base::plain   (static binding)
    p->poly();    // Derived::poly (dynamic binding)
    delete p;
}
