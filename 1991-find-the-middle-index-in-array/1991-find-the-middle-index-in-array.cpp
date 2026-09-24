class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int totalSum = 0;

    
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        int leftSum = 0;

    
        for (int i = 0; i < nums.size(); i++) {
            
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }
            else

            leftSum += nums[i];
        }

        return -1;
    }
};