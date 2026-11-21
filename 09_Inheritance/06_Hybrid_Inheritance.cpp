// Hybrid inheritance: multilevel + multiple (diamond), virtual base avoids duplicate Person
#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name = "Alex";
};
class Student : virtual public Person { public: int roll = 7; };
class Employee : virtual public Person { public: int empId = 101; };
class WorkingStudent : public Student, public Employee {};
int main() {
    WorkingStudent w;
    cout << w.name << " roll=" << w.roll << " empId=" << w.empId << '\n';  // name unambiguous thanks to virtual base
}
