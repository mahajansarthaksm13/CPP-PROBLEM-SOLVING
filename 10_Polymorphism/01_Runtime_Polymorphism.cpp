// Run-time polymorphism: virtual function resolved by dynamic type
#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() { return 0; }
    virtual ~Shape() {}
};
class Circle : public Shape {
    double r;
public:
    Circle(double r) : r(r) {}
    double area() override { return 3.14159 * r * r; }
};
class Rect : public Shape {
    double w, h;
public:
    Rect(double w, double h) : w(w), h(h) {}
    double area() override { return w * h; }
};
int main() {
    Circle c(1); Rect r(2, 3);
    Shape* shapes[] = {&c, &r};
    for (Shape* s : shapes) cout << s->area() << '\n';   // Circle::area then Rect::area
}
