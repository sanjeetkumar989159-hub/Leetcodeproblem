class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int lefts= 0;
            for(int j = 0; j < i; j++) {
                lefts += nums[j];
            }
            int rights= 0;
            for(int j = i + 1; j < n; j++) {
                rights += nums[j];
            }
            if(lefts == rights) {
                return i;
            }
        }
        return -1;
    }
};