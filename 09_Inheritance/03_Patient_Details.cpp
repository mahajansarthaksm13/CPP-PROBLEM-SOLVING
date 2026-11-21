// Patient details: Person -> Patient
#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name; int age;
public:
    void input() { cout << "Name: "; cin >> name; cout << "Age: "; cin >> age; }
};
class Patient : public Person {
    int id; string disease;
public:
    void inputPatient() { input(); cout << "Patient ID: "; cin >> id; cout << "Disease: "; cin >> disease; }
    void display() { cout << "\nID: " << id << "\nName: " << name << "\nAge: " << age << "\nDisease: " << disease << '\n'; }
};
int main() {
    Patient p;
    p.inputPatient();
    p.display();
}
