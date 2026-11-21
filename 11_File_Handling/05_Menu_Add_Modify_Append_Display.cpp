// Menu: Add (overwrite), Modify (replace a line), Append, Display on records.txt
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
vector<string> load() { ifstream in("records.txt"); vector<string> v; string s; while (getline(in, s)) v.push_back(s); return v; }
void save(const vector<string>& v) { ofstream out("records.txt"); for (auto& s : v) out << s << '\n'; }
int main() {
    int choice; string s;
    while (cout << "1=Add(new file) 2=Modify 3=Append 4=Display 0=Exit: ", cin >> choice, choice) {
        cin.ignore();
        if (choice == 1) { cout << "Record: "; getline(cin, s); save({s}); }
        else if (choice == 2) {
            auto v = load(); size_t i;
            cout << "Line number (1.." << v.size() << "): "; cin >> i; cin.ignore();
            if (i >= 1 && i <= v.size()) { cout << "New text: "; getline(cin, v[i - 1]); save(v); }
        }
        else if (choice == 3) { cout << "Record: "; getline(cin, s); ofstream("records.txt", ios::app) << s << '\n'; }
        else if (choice == 4) { auto v = load(); for (size_t i = 0; i < v.size(); i++) cout << i + 1 << ": " << v[i] << '\n'; }
    }
}
