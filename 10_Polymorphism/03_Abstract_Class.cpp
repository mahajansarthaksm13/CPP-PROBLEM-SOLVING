// Abstract class: has at least one pure virtual function, cannot be instantiated
#include <iostream>
using namespace std;
class Account {
protected:
    double balance;
public:
    Account(double b) : balance(b) {}
    virtual double interest() = 0;                       // makes Account abstract
    void show() { cout << "Balance " << balance << ", interest " << interest() << '\n'; }
    virtual ~Account() {}
};
class Savings : public Account {
public:
    Savings(double b) : Account(b) {}
    double interest() override { return balance * 0.04; }
};
class Current : public Account {
public:
    Current(double b) : Account(b) {}
    double interest() override { return 0; }
};
int main() {
    Savings s(1000); Current c(1000);
    s.show(); c.show();
}
