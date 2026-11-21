// Run-time polymorphism: same call, different behavior chosen at run time
#include <iostream>
using namespace std;
class Notifier {
public:
    virtual void send(const char* msg) { cout << "Generic: " << msg << '\n'; }
    virtual ~Notifier() {}
};
class Email : public Notifier { public: void send(const char* m) override { cout << "Email: " << m << '\n'; } };
class SMS   : public Notifier { public: void send(const char* m) override { cout << "SMS: " << m << '\n'; } };
int main() {
    int choice;
    cout << "1=Email 2=SMS other=Generic: ";
    cin >> choice;
    Notifier* n = choice == 1 ? new Email : choice == 2 ? new SMS : new Notifier;
    n->send("hello");   // resolved at run time by the actual object
    delete n;
}
