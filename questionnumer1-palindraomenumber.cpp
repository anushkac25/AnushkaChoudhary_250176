class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int number = x;
        long long reverse = 0;
        while (x != 0) {
            int remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x = x / 10;
        }
        if (number = reverse) {
            return true;
        }
        else 
        return false;+
    }
};