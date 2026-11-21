// Second most frequent string in a sequence, hash map O(n)
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string,int> freq;
    for (int i = 0; i < n; i++) { string s; cin >> s; freq[s]++; }
    int first = 0, second = 0;
    for (auto& p : freq) {
        if (p.second > first) { second = first; first = p.second; }
        else if (p.second > second && p.second < first) second = p.second;
    }
    for (auto& p : freq) if (p.second == second && second) { cout << p.first << '\n'; return 0; }
    cout << "None\n";
}
