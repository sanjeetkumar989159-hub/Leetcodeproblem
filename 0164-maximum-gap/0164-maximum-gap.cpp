class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int n = nums.size();

        if (n < 2) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int maxgap = 0;

        for (int i = 1; i < n; i++) {
            int result = nums[i] - nums[i - 1];
            maxgap = max(result, maxgap);
        }

        return maxgap;
    }
};
