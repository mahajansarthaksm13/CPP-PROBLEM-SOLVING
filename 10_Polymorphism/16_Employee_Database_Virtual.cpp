// Employee database: virtual salary() per role, total payroll via base pointers
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee {
protected:
    string name;
public:
    Employee(string n) : name(n) {}
    virtual double salary() = 0;
    void show() { cout << name << ": " << salary() << '\n'; }
    virtual ~Employee() {}
};
class Hourly : public Employee {
    double rate, hours;
public:
    Hourly(string n, double r, double h) : Employee(n), rate(r), hours(h) {}
    double salary() override { return rate * hours; }
};
class Salaried : public Employee {
    double monthly;
public:
    Salaried(string n, double m) : Employee(n), monthly(m) {}
    double salary() override { return monthly; }
};
int main() {
    vector<Employee*> db = {new Hourly("Ann", 20, 160), new Salaried("Bob", 4000)};
    double total = 0;
    for (Employee* e : db) { e->show(); total += e->salary(); delete e; }
    cout << "Total payroll: " << total << '\n';
}
