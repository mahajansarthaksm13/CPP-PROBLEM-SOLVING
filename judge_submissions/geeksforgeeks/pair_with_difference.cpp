class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        long long d = llabs((long long)x);
        sort(arr.begin(), arr.end());
        int n = arr.size(), i = 0, j = 1;
        while (i < n && j < n) {
            if (i != j) {
                long long diff = (long long)arr[j] - arr[i];
                if (diff == d) return true;
                if (diff < d) j++; else i++;
            } else j++;
        }
        return false;
    }
};
