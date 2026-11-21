class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        unsigned int x = 0;
        for (int v : arr) x ^= (unsigned)v;
        unsigned int diff = x & (~x + 1);
        unsigned int a = 0, b = 0;
        for (int v : arr) {
            if ((unsigned)v & diff) a ^= (unsigned)v;
            else b ^= (unsigned)v;
        }
        int p = (int)a, q = (int)b;
        if (p > q) { int t = p; p = q; q = t; }
        return vector<int>{p, q};
    }
};
