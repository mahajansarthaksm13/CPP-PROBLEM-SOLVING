class Solution {
  public:
    int countSetBits(int n) {
        long long total = 0;
        for (long long i = 1; i <= n; i <<= 1) {
            long long block = i << 1;
            long long full = ((long long)(n + 1) / block) * i;
            long long rem = (long long)(n + 1) % block;
            total += full + max(0LL, rem - i);
        }
        return (int)total;
    }
};
