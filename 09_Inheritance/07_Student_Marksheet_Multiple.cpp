// Marksheet via multiple inheritance: Student + Marks -> Result
#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name; int roll;
public:
    void getStudent() { cout << "Name Roll: "; cin >> name >> roll; }
};
class Marks {
protected:
    int m[3];
public:
    void getMarks() { cout << "3 marks: "; for (int& x : m) cin >> x; }
};
class Result : public Student, public Marks {
public:
    void show() {
        int total = m[0] + m[1] + m[2];
        cout << "\n--- Marksheet ---\nName: " << name << "\nRoll: " << roll
             << "\nTotal: " << total << "\nPercent: " << total / 3.0 << "%\n";
    }
};
int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.show();
}
