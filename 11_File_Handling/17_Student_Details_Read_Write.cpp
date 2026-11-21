// Write N student records to students.txt, then read and display them
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Students: ";
    cin >> n;
    {
        ofstream out("students.txt");
        for (int i = 0; i < n; i++) {
            string name; int roll; double marks;
            cout << "Name Roll Marks: ";
            cin >> name >> roll >> marks;
            out << name << ' ' << roll << ' ' << marks << '\n';
        }
    }
    ifstream in("students.txt");
    string name; int roll; double marks;
    cout << "\n--- students.txt ---\n";
    while (in >> name >> roll >> marks) cout << roll << ' ' << name << ' ' << marks << '\n';
}
