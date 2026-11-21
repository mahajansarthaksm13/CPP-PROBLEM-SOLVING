// Area of rectangle: Shape (dimensions) -> Rectangle (area)
#include <iostream>
using namespace std;
class Shape {
protected:
    double length, width;
public:
    void set(double l, double w) { length = l; width = w; }
};
class Rectangle : public Shape {
public:
    double area() { return length * width; }
};
int main() {
    double l, w;
    cout << "Length Width: ";
    cin >> l >> w;
    Rectangle r;
    r.set(l, w);
    cout << "Area = " << r.area() << '\n';
}
