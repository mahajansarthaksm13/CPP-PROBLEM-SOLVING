// Array of base pointers holding different derived objects
#include <iostream>
using namespace std;
class Instrument {
public:
    virtual void play() { cout << "...\n"; }
    virtual ~Instrument() {}
};
class Guitar : public Instrument { public: void play() override { cout << "Strum\n"; } };
class Drum   : public Instrument { public: void play() override { cout << "Boom\n"; } };
int main() {
    Instrument* band[] = {new Guitar, new Drum, new Instrument};
    for (Instrument* i : band) { i->play(); delete i; }
}
