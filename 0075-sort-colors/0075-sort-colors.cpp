class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count_zero = 0;
        int count_one = 0;
        int count_two = 0;

        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0){
                count_zero++;
            }
            else if(nums[i] == 1){
                count_one++;
            }
            else {
                count_two++;
            }
        }

        // Zero
        int k = 0;

        for(int i = 0; i < count_zero; i++){
            nums[k] = 0;
            k++;
        }

        for(int i = 0; i < count_one; i++){
            nums[k] = 1;
            k++;
        }

        for(int i = 0; i < count_two; i++){
            nums[k] = 2;
            k++;
        }
    }
};