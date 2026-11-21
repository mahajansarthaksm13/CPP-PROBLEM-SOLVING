// Template class derived from another template class
#include <iostream>
using namespace std;
template <typename T>
class Pair {
protected:
    T a, b;
public:
    Pair(T x, T y) : a(x), b(y) {}
    T sum() { return a + b; }
};
template <typename T>
class Triple : public Pair<T> {
    T c;
public:
    Triple(T x, T y, T z) : Pair<T>(x, y), c(z) {}
    T sum() { return Pair<T>::sum() + c; }   // dependent base needs qualification
};
int main() {
    Triple<int> t(1, 2, 3);
    Triple<double> d(0.5, 0.25, 0.125);
    cout << t.sum() << ' ' << d.sum() << '\n';
}
