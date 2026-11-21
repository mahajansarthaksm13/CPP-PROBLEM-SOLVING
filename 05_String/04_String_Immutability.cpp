// std::string is mutable in C++; immutability is opt-in via const.
// Demo: a copy can change without touching the original; a const string cannot change at all.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string original = "hello";
    string copy = original;
    copy[0] = 'J';                       // modifies only the copy
    const string frozen = "immutable";
    // frozen[0] = 'X';                  // compile error: const string is immutable
    cout << "original: " << original << "\ncopy: " << copy << "\nfrozen: " << frozen << '\n';
    cout << "std::string is mutable; use const to make it immutable\n";
}
