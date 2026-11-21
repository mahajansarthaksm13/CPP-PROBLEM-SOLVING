// Book records in books.txt: add / display (menu)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int choice;
    while (cout << "1=Add 2=Display 0=Exit: ", cin >> choice, choice) {
        if (choice == 1) {
            string title, author; double price;
            cout << "Title Author Price: ";
            cin >> title >> author >> price;
            ofstream("books.txt", ios::app) << title << ' ' << author << ' ' << price << '\n';
        } else if (choice == 2) {
            ifstream in("books.txt");
            string title, author; double price;
            while (in >> title >> author >> price) cout << title << " by " << author << " - " << price << '\n';
        }
    }
}
