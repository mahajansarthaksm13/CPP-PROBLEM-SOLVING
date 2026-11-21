// Employee database: base pointer array, virtual input/display per employee type
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Employee {
protected:
    string name; int id;
public:
    virtual void input() { cout << "Name ID: "; cin >> name >> id; }
    virtual void display() { cout << name << " (" << id << ")"; }
    virtual ~Employee() {}
};
class Engineer : public Employee {
    string skill;
public:
    void input() override { Employee::input(); cout << "Skill: "; cin >> skill; }
    void display() override { Employee::display(); cout << " Engineer, skill " << skill << '\n'; }
};
class Manager : public Employee {
    int team;
public:
    void input() override { Employee::input(); cout << "Team size: "; cin >> team; }
    void display() override { Employee::display(); cout << " Manager, team " << team << '\n'; }
};
int main() {
    vector<Employee*> db;
    int n;
    cout << "Employees: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int type;
        cout << "Type (1=Engineer, 2=Manager): ";
        cin >> type;
        Employee* e = type == 1 ? (Employee*)new Engineer : new Manager;
        e->input();
        db.push_back(e);
    }
    cout << "\n--- Database ---\n";
    for (Employee* e : db) { e->display(); delete e; }
}
