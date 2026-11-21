// Signup: reject duplicate username, otherwise append to users.txt
// Note: stores the password as typed; a real system stores a salted hash instead.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string user, pass;
    cout << "Username: "; cin >> user;
    cout << "Password: "; cin >> pass;
    ifstream in("users.txt");
    string u, p;
    while (in >> u >> p)
        if (u == user) { cout << "Username already taken\n"; return 0; }
    ofstream("users.txt", ios::app) << user << ' ' << pass << '\n';
    cout << "Registered " << user << '\n';
}
