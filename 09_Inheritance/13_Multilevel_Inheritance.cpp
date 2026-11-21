// Multilevel inheritance: Vehicle -> Car -> SportsCar
#include <iostream>
using namespace std;
class Vehicle { public: void move() { cout << "Vehicle moves\n"; } };
class Car : public Vehicle { public: void drive() { cout << "Car drives\n"; } };
class SportsCar : public Car { public: void race() { cout << "SportsCar races\n"; } };
int main() {
    SportsCar s;
    s.move(); s.drive(); s.race();
}
