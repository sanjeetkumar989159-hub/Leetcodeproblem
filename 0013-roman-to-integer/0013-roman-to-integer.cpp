class Solution {
public:
    int romanToInt(string s) {

        int I = 1;
        int V = 5;
        int X = 10;
        int L = 50;
        int C = 100;
        int D = 500;
        int M = 1000;

        int sum = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == 'I')
                sum += I;

            else if (s[i] == 'V')
                sum += V;

            else if (s[i] == 'X')
                sum += X;

            else if (s[i] == 'L')
                sum += L;

            else if (s[i] == 'C')
                sum += C;

            else if (s[i] == 'D')
                sum += D;

            else if (s[i] == 'M')
                sum += M;
        }

        for (int i = 0; i < s.length() - 1; i++) {

            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                sum -= 2;

            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                sum -= 20;

            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                sum -= 200;
        }

        return sum;
    }
};