class Solution {
  public:
    long long mergeCount(vector<int>& a, int l, int r, vector<int>& tmp) {
        if (l >= r) return 0;
        int mid = l + (r - l) / 2;
        long long cnt = mergeCount(a, l, mid, tmp) + mergeCount(a, mid + 1, r, tmp);
        int i = l, j = mid + 1, k = l;
        while (i <= mid && j <= r) {
            if (a[i] <= a[j]) tmp[k++] = a[i++];
            else { cnt += mid - i + 1; tmp[k++] = a[j++]; }
        }
        while (i <= mid) tmp[k++] = a[i++];
        while (j <= r) tmp[k++] = a[j++];
        for (int x = l; x <= r; x++) a[x] = tmp[x];
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        vector<int> tmp(arr.size());
        return (int)mergeCount(arr, 0, (int)arr.size() - 1, tmp);
    }
};
