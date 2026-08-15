class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums = 0;
        int sumT = 0;

        for (int i = 0; i < t.size(); i++) {
            sumT += t[i];
        }

        for (int i = 0; i < s.size(); i++) {
            sums += s[i];
        }

        return sumT -sums;
    }
};