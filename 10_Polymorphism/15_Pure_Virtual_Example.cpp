// Pure virtual functions used as a plugin interface
#include <iostream>
using namespace std;
class Operation {
public:
    virtual int apply(int a, int b) = 0;
    virtual char symbol() = 0;
    virtual ~Operation() {}
};
class Add : public Operation { public: int apply(int a, int b) override { return a + b; } char symbol() override { return '+'; } };
class Mul : public Operation { public: int apply(int a, int b) override { return a * b; } char symbol() override { return '*'; } };
int main() {
    int a, b;
    cout << "a b: ";
    cin >> a >> b;
    Add add; Mul mul;
    Operation* ops[] = {&add, &mul};
    for (Operation* op : ops) cout << a << ' ' << op->symbol() << ' ' << b << " = " << op->apply(a, b) << '\n';
}
