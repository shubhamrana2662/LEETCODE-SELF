class Solution {
public:
    int longestSubsequence(const vector<int>& nums) {
        int xorVal = 0;
        bool hasNonZero = false;

        for (int num : nums) {
            xorVal ^= num;

            if (num != 0)
                hasNonZero = true;
        }

        if (xorVal != 0)
            return nums.size();

        if (hasNonZero)
            return nums.size() - 1;

        return 0;
    }
};