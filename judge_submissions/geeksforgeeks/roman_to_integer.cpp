class Solution {
  public:
    int romanToInteger(string &s) {
        unordered_map<char,int> v{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int total = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && v[s[i]] < v[s[i+1]]) total -= v[s[i]];
            else total += v[s[i]];
        }
        return total;
    }
};
