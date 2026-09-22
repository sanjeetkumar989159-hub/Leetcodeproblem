class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original = num;

        int rev = 0;
        while (num != 0) {
            int rem = num % 10;
            num /= 10;
            rev = rev * 10 + rem;
        }

        num = rev;
        rev = 0;

        while (num != 0) {
            int rem = num % 10;
            num /= 10;
            rev = rev * 10 + rem;
        }

        return original == rev;
    }
};