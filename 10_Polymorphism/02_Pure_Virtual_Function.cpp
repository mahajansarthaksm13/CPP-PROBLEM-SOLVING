// Pure virtual function forces derived classes to implement it
#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() = 0;   // pure virtual
    virtual ~Animal() {}
};
class Dog : public Animal { public: void sound() override { cout << "Woof\n"; } };
class Cat : public Animal { public: void sound() override { cout << "Meow\n"; } };
int main() {
    // Animal a;  // error: abstract class
    Dog d; Cat c;
    Animal* zoo[] = {&d, &c};
    for (Animal* a : zoo) a->sound();
}
