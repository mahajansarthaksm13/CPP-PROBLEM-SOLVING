// Pure virtual functions with a common driver loop
#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual int wheels() = 0;
    virtual const char* name() = 0;
    virtual ~Vehicle() {}
};
class Bike : public Vehicle { public: int wheels() override { return 2; } const char* name() override { return "Bike"; } };
class Car  : public Vehicle { public: int wheels() override { return 4; } const char* name() override { return "Car"; } };
int main() {
    Bike b; Car c;
    Vehicle* v[] = {&b, &c};
    for (Vehicle* x : v) cout << x->name() << " has " << x->wheels() << " wheels\n";
}
