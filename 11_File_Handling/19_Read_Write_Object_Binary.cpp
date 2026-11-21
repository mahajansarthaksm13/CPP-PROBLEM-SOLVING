// Binary write()/read() of a POD object
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct Record {
    char name[20]; int id; double score;
};
int main() {
    Record w; strcpy(w.name, "Alice"); w.id = 1; w.score = 91.5;
    { ofstream out("rec.bin", ios::binary); out.write((char*)&w, sizeof w); }
    Record r;
    ifstream in("rec.bin", ios::binary);
    in.read((char*)&r, sizeof r);
    cout << r.name << ' ' << r.id << ' ' << r.score << '\n';
}
