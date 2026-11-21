// Abstract base class: cannot instantiate, but references/pointers to it are fine
#include <iostream>
using namespace std;
class Sensor {
public:
    virtual double read() = 0;
    virtual ~Sensor() {}
};
class TempSensor : public Sensor { public: double read() override { return 21.5; } };
class LightSensor : public Sensor { public: double read() override { return 300; } };
void print(Sensor& s) { cout << "reading = " << s.read() << '\n'; }   // reference to abstract type
int main() {
    TempSensor t; LightSensor l;
    print(t); print(l);
}
