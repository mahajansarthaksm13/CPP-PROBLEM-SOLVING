// LeetCode 121 - Best Time to Buy and Sell Stock
// One pass, O(n) time, O(1) space.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, best = 0;
        for (int p : prices) {
            best = max(best, p - minPrice);
            minPrice = min(minPrice, p);
        }
        return best;
    }
};
