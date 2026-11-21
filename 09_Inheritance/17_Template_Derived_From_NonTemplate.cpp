// Template class derived from a non-template base
#include <iostream>
using namespace std;
class Counter {
protected:
    int count = 0;
public:
    void tick() { count++; }
};
template <typename T>
class Stack : public Counter {   // Stack<T> inherits the counter
    T data[100];
public:
    void push(T v) { data[count] = v; tick(); }
    T pop() { return data[--count]; }
    int size() { return count; }
};
int main() {
    Stack<double> s;
    s.push(1.5); s.push(2.5);
    cout << "size=" << s.size() << " pop=" << s.pop() << '\n';
}
