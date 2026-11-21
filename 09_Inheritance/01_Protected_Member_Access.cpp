// Protected member: hidden from outside, visible to derived class
#include <iostream>
using namespace std;
class Base {
protected:
    int secret = 42;
};
class Derived : public Base {
public:
    void show() { cout << "secret via derived = " << secret << '\n'; }
};
int main() {
    Derived d;
    d.show();
    // d.secret = 1;  // error: protected member not accessible here
}
