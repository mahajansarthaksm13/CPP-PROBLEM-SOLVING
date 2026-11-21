class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        long long total = 0;
        for (int i = 0; i < n - 2; i++) {
            int lo = i + 1, hi = n - 1;
            while (lo < hi) {
                if ((long long)arr[i] + arr[lo] + arr[hi] < sum) { total += hi - lo; lo++; }
                else hi--;
            }
        }
        return (int)total;
    }
};
