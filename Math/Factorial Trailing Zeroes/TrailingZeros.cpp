class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0, i = 5;
        while (i <= n)
        {
            count += n / i;
            i *= 5;
        }
        return count;
    }
};