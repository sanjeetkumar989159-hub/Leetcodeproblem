import java.util.Arrays;

class Solution {
    public int firstMissingPositive(int[] nums) {
        
        int number = 1;

        Arrays.sort(nums);

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == number) {
                number++;
            }
        }

        return number;
    }
}