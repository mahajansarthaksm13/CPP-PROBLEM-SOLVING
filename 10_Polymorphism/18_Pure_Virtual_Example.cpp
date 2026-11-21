// Pure virtual functions: derived class must implement all of them to be concrete
#include <iostream>
using namespace std;
class Player {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual ~Player() {}
};
class AudioPlayer : public Player {
public:
    void start() override { cout << "audio start\n"; }
    void stop() override { cout << "audio stop\n"; }
};
// class Broken : public Player { void start() override {} };  // still abstract: stop() missing
int main() {
    AudioPlayer a;
    Player& p = a;
    p.start(); p.stop();
}
