// House records in houses.txt: add / search by house number
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int choice;
    while (cout << "1=Add 2=Search 3=Display 0=Exit: ", cin >> choice, choice) {
        if (choice == 1) {
            int no; string owner; double area;
            cout << "HouseNo Owner Area: ";
            cin >> no >> owner >> area;
            ofstream("houses.txt", ios::app) << no << ' ' << owner << ' ' << area << '\n';
        } else {
            int q = 0;
            if (choice == 2) { cout << "HouseNo: "; cin >> q; }
            ifstream in("houses.txt");
            int no; string owner; double area;
            while (in >> no >> owner >> area)
                if (choice == 3 || no == q) cout << "House " << no << ", owner " << owner << ", area " << area << '\n';
        }
    }
}
