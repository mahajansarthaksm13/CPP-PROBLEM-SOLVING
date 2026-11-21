// Inheritance beyond single level: A -> B -> C
#include <iostream>
using namespace std;
class A { public: void fa() { cout << "A::fa\n"; } };
class B : public A { public: void fb() { cout << "B::fb\n"; } };
class C : public B { public: void fc() { cout << "C::fc\n"; } };
int main() {
    C c;
    c.fa(); c.fb(); c.fc();   // C inherits everything up the chain
}
