// Balanced brackets check with a stack, O(n)
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> st;
    bool ok = true;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') st.push(c);
        else {
            char open = c == ')' ? '(' : c == ']' ? '[' : '{';
            if (st.empty() || st.top() != open) { ok = false; break; }
            st.pop();
        }
    }
    cout << (ok && st.empty() ? "true" : "false") << '\n';
}
