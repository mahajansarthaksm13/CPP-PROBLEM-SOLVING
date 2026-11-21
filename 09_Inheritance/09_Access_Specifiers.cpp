// private: base only; protected: base + derived; public: everyone
#include <iostream>
using namespace std;
class Base {
private:   int priv = 1;
protected: int prot = 2;
public:    int pub = 3;
    int getPriv() { return priv; }   // only way to reach private from outside
};
class Derived : public Base {
public:
    void show() {
        // cout << priv;   // error: private not inherited
        cout << "protected in derived = " << prot << '\n';
        cout << "public in derived = " << pub << '\n';
        cout << "private via base getter = " << getPriv() << '\n';
    }
};
int main() {
    Derived d;
    d.show();
    cout << "public from main = " << d.pub << '\n';
    // d.prot, d.priv  // error from main
}
