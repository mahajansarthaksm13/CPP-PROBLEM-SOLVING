// Abstract base class with data and pure virtual behavior
#include <iostream>
#include <string>
using namespace std;
class Shape {
protected:
    string name;
public:
    Shape(string n) : name(n) {}
    virtual double perimeter() = 0;
    void describe() { cout << name << " perimeter = " << perimeter() << '\n'; }
    virtual ~Shape() {}
};
class Square : public Shape { double s; public: Square(double s) : Shape("Square"), s(s) {} double perimeter() override { return 4 * s; } };
class Circle : public Shape { double r; public: Circle(double r) : Shape("Circle"), r(r) {} double perimeter() override { return 2 * 3.14159 * r; } };
int main() {
    Square sq(2); Circle ci(1);
    sq.describe(); ci.describe();
}
