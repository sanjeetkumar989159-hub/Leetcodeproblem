class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n=nums.size();
        long long max1=LONG_MIN;
        long long max2=LONG_MIN;
        long long max3=LONG_MIN;
        
        for(int i = 0 ; i < n ; i++){

            if(max1 < nums[i]){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }

            else if(max2 < nums[i] && max1 != nums[i]){
                max3 = max2;
                max2 = nums[i];
            }

            else if(max3 < nums[i] && max2 != nums[i] && max1 != nums[i]){
                max3 = nums[i];
            }
        }

        if(max3 == LONG_MIN){
            return max1;
        }

        else{
            return max3;
        }
        
    }

};