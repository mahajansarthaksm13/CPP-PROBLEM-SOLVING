// Employee database with virtual bonus(): search by id through base pointers
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee {
protected:
    int id; string name; double base;
public:
    Employee(int i, string n, double b) : id(i), name(n), base(b) {}
    int getId() { return id; }
    virtual double bonus() { return 0; }
    void show() { cout << id << ' ' << name << " base " << base << " bonus " << bonus() << '\n'; }
    virtual ~Employee() {}
};
class Sales : public Employee {
    double sold;
public:
    Sales(int i, string n, double b, double s) : Employee(i, n, b), sold(s) {}
    double bonus() override { return sold * 0.05; }
};
class Executive : public Employee {
public:
    Executive(int i, string n, double b) : Employee(i, n, b) {}
    double bonus() override { return base * 0.2; }
};
int main() {
    vector<Employee*> db = {new Sales(1, "Ann", 3000, 20000), new Executive(2, "Bob", 9000)};
    int q;
    cout << "Search id: ";
    cin >> q;
    for (Employee* e : db) if (e->getId() == q) e->show();
    for (Employee* e : db) delete e;
}
