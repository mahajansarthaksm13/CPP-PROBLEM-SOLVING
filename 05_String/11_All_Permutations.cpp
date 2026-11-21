// Unique permutations in lexicographic order: sort + next_permutation
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do cout << s << '\n'; while (next_permutation(s.begin(), s.end()));
}
