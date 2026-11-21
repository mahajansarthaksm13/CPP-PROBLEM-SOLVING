class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int cand = arr[0], cnt = 0;
        for (int v : arr) {
            if (cnt == 0) { cand = v; cnt = 1; }
            else if (v == cand) cnt++;
            else cnt--;
        }
        cnt = 0;
        for (int v : arr) if (v == cand) cnt++;
        return (cnt > (int)arr.size() / 2) ? cand : -1;
    }
};
