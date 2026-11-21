// Multiple inheritance: Area + Volume -> Box
#include <iostream>
using namespace std;
class Area {
public:
    double area(double l, double w) { return l * w; }
};
class Volume {
public:
    double volume(double l, double w, double h) { return l * w * h; }
};
class Box : public Area, public Volume {
    double l, w, h;
public:
    Box(double l, double w, double h) : l(l), w(w), h(h) {}
    void show() { cout << "Base area = " << area(l, w) << "\nVolume = " << volume(l, w, h) << '\n'; }
};
int main() {
    double l, w, h;
    cout << "Length Width Height: ";
    cin >> l >> w >> h;
    Box(l, w, h).show();
}
