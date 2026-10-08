class Solution {
    public int findNumbers(int[] nums) {
       int Count = 0;

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            int count1 = 0;
            
            while (num > 0) {
                num /= 10;
                count1++;
            }
            
            if (count1 % 2 == 0) {
                Count++;
            }
        }

        return Count;
     
    }
}