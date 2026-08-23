class Solution {
public:
    int addDigits(int num) {

        if(num >= 0 && num <= 9){
            return num;
        }

        if(num % 9 == 0){
            return 1+(num-1)%9;
        }

        return num % 9;

    }
};