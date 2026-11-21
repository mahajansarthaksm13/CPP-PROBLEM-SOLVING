class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i = 0, j = 0, taken = 0, last = 0;
        while (taken < k) {
            if (i < (int)a.size() && (j >= (int)b.size() || a[i] <= b[j])) last = a[i++];
            else last = b[j++];
            taken++;
        }
        return last;
    }
};
