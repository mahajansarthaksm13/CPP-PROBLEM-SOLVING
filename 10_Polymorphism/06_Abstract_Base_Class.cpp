// Abstract base class as an interface for different payment methods
#include <iostream>
using namespace std;
class Payment {
public:
    virtual void pay(double amt) = 0;
    virtual ~Payment() {}
};
class Card : public Payment { public: void pay(double a) override { cout << "Card paid " << a << '\n'; } };
class Cash : public Payment { public: void pay(double a) override { cout << "Cash paid " << a << '\n'; } };
void checkout(Payment& p, double amt) { p.pay(amt); }   // works with any Payment
int main() {
    Card c; Cash h;
    checkout(c, 250); checkout(h, 40);
}
