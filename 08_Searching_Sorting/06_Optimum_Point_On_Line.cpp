// Point on line ax+by+c=0 minimizing sum of distances to given points: ternary search (convex)
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n; double a, b, c;
    cin >> n;
    vector<pair<double,double>> p(n);
    for (auto& q : p) cin >> q.first >> q.second;
    cin >> a >> b >> c;
    // parametrize: base point P0 on line, direction d = (b, -a) (unit)
    double len = sqrt(a * a + b * b), dx = b / len, dy = -a / len;
    double x0 = -a * c / (a * a + b * b), y0 = -b * c / (a * a + b * b);
    auto cost = [&](double t) {
        double x = x0 + t * dx, y = y0 + t * dy, s = 0;
        for (auto& q : p) s += hypot(q.first - x, q.second - y);
        return s;
    };
    double lo = -1e7, hi = 1e7;
    for (int it = 0; it < 200; it++) {
        double m1 = lo + (hi - lo) / 3, m2 = hi - (hi - lo) / 3;
        if (cost(m1) < cost(m2)) hi = m2; else lo = m1;
    }
    cout << fixed << setprecision(5) << "Point: (" << x0 + lo * dx << ", " << y0 + lo * dy << ")\nMin distance sum: " << cost(lo) << '\n';
}
