// Pure virtual function: interface contract for derived classes
#include <iostream>
using namespace std;
class Logger {
public:
    virtual void log(const char* msg) = 0;
    virtual ~Logger() {}
};
class ConsoleLogger : public Logger { public: void log(const char* m) override { cout << "[console] " << m << '\n'; } };
class QuietLogger   : public Logger { public: void log(const char*) override {} };
int main() {
    ConsoleLogger c; QuietLogger q;
    Logger* l[] = {&c, &q};
    for (Logger* x : l) x->log("started");
}
