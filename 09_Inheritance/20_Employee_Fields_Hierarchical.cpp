// Hierarchical inheritance: Employee -> Engineer, Manager
#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name; int id; double salary;
public:
    void input() { cout << "Name ID Salary: "; cin >> name >> id >> salary; }
    void display() { cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary; }
};
class Engineer : public Employee {
    string skill;
public:
    void input() { Employee::input(); cout << "Skill: "; cin >> skill; }
    void display() { Employee::display(); cout << ", Field: Engineering, Skill: " << skill << '\n'; }
};
class Manager : public Employee {
    int teamSize;
public:
    void input() { Employee::input(); cout << "Team size: "; cin >> teamSize; }
    void display() { Employee::display(); cout << ", Field: Management, Team: " << teamSize << '\n'; }
};
int main() {
    Engineer e; Manager m;
    cout << "Engineer\n"; e.input();
    cout << "Manager\n"; m.input();
    e.display(); m.display();
}
