// Constructor order in multiple inheritance follows base-list order, not initializer-list order
#include <iostream>
using namespace std;
class A { public: A(int x) { cout << "A ctor " << x << '\n'; } };
class B { public: B(int x) { cout << "B ctor " << x << '\n'; } };
class C : public A, public B {
public:
    C(int a, int b) : B(b), A(a) { cout << "C ctor\n"; }  // A still runs first
};
int main() {
    C c(1, 2);
}
