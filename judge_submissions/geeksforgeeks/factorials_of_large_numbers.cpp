class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int> digits{1};
        for (int m = 2; m <= n; m++) {
            int carry = 0;
            for (int& d : digits) {
                int prod = d * m + carry;
                d = prod % 10;
                carry = prod / 10;
            }
            while (carry) { digits.push_back(carry % 10); carry /= 10; }
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
