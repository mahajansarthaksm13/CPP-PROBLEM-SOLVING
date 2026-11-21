// Encrypt plain.txt -> cipher.txt with XOR key (symmetric; same program structure decrypts)
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int key;
    cout << "Key (1-255): ";
    cin >> key;
    ifstream in("plain.txt", ios::binary);
    ofstream out("cipher.txt", ios::binary);
    if (!in) { cout << "plain.txt not found\n"; return 1; }
    char c;
    while (in.get(c)) out.put(c ^ key);
    cout << "cipher.txt written\n";
}
