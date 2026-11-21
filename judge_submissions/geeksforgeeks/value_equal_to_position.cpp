class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        vector<int> res;
        for (size_t i = 0; i < arr.size(); i++)
            if (arr[i] == (int)i + 1) res.push_back(arr[i]);
        return res;
    }
};
