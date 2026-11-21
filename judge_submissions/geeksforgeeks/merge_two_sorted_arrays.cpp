class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size(), total = n + m;
        auto at = [&](int i) -> int& { return i < n ? a[i] : b[i - n]; };
        int gap = (total + 1) / 2;
        while (gap > 0) {
            for (int i = 0; i + gap < total; i++)
                if (at(i) > at(i + gap)) swap(at(i), at(i + gap));
            gap = (gap == 1) ? 0 : (gap + 1) / 2;
        }
    }
};
