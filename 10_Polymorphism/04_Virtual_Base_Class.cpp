// Virtual base class: single shared Person sub-object in the diamond
#include <iostream>
using namespace std;
class Person {
public:
    int id;
};
class Teacher : virtual public Person {};
class Researcher : virtual public Person {};
class Professor : public Teacher, public Researcher {};
int main() {
    Professor p;
    p.id = 7;                        // unambiguous: only one Person
    cout << p.Teacher::id << ' ' << p.Researcher::id << '\n';   // same object: 7 7
}
