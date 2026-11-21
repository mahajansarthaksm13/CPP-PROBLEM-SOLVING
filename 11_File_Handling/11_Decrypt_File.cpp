// Decrypt cipher.txt -> decrypted.txt with the same XOR key
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int key;
    cout << "Key (1-255): ";
    cin >> key;
    ifstream in("cipher.txt", ios::binary);
    ofstream out("decrypted.txt", ios::binary);
    if (!in) { cout << "cipher.txt not found\n"; return 1; }
    char c;
    while (in.get(c)) out.put(c ^ key);
    cout << "decrypted.txt written\n";
}
