class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int result = n;

        for (int i = 0; i < n; i++) {
            result ^= i;
            result ^= nums[i];
        }

        return result;
    }
};