// Constructor order in multilevel inheritance: A, B, C; destructors reverse
#include <iostream>
using namespace std;
class A { public: A() { cout << "A ctor\n"; } ~A() { cout << "A dtor\n"; } };
class B : public A { public: B() { cout << "B ctor\n"; } ~B() { cout << "B dtor\n"; } };
class C : public B { public: C() { cout << "C ctor\n"; } ~C() { cout << "C dtor\n"; } };
int main() {
    C c;
}
