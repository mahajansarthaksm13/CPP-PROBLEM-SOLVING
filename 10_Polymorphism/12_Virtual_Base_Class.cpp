// Without virtual base: two copies of Base; with virtual base: one copy
#include <iostream>
using namespace std;
class Base { public: int v = 1; };
class L1 : public Base {};
class R1 : public Base {};
class Bad : public L1, public R1 {};            // two Base sub-objects
class L2 : virtual public Base {};
class R2 : virtual public Base {};
class Good : public L2, public R2 {};           // one shared Base
int main() {
    Bad b; Good g;
    // b.v = 5;            // error: ambiguous
    b.L1::v = 5; b.R1::v = 6;
    g.v = 9;               // fine: single Base
    cout << "Bad: " << b.L1::v << ' ' << b.R1::v << "\nGood: " << g.L2::v << ' ' << g.R2::v << '\n';
}
