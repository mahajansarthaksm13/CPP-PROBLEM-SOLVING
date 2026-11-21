// Abstract class with concrete helper + pure virtual hook (template method pattern)
#include <iostream>
using namespace std;
class Report {
public:
    void generate() { header(); body(); cout << "---- end ----\n"; }   // concrete
    virtual ~Report() {}
protected:
    void header() { cout << "---- report ----\n"; }
    virtual void body() = 0;                                              // abstract hook
};
class SalesReport : public Report { void body() override { cout << "sales: 120 units\n"; } };
class StockReport : public Report { void body() override { cout << "stock: 42 items\n"; } };
int main() {
    SalesReport s; StockReport t;
    s.generate(); t.generate();
}
