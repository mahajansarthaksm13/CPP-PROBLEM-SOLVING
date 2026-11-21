// Hierarchical inheritance: Student -> Science, Commerce
#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name; int roll;
public:
    void input() { cout << "Name Roll: "; cin >> name >> roll; }
    void display() { cout << "Name: " << name << ", Roll: " << roll; }
};
class Science : public Student {
    int physics;
public:
    void input() { Student::input(); cout << "Physics marks: "; cin >> physics; }
    void display() { Student::display(); cout << ", Stream: Science, Physics: " << physics << '\n'; }
};
class Commerce : public Student {
    int accounts;
public:
    void input() { Student::input(); cout << "Accounts marks: "; cin >> accounts; }
    void display() { Student::display(); cout << ", Stream: Commerce, Accounts: " << accounts << '\n'; }
};
int main() {
    Science s; Commerce c;
    cout << "Science student\n"; s.input();
    cout << "Commerce student\n"; c.input();
    s.display(); c.display();
}
