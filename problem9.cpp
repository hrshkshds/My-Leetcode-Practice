class Solution {
public:
    bool isPalindrome(int x) {
        long int n = x;
        if (x < 0) {
            return false;
        }
        long int reverse = 0;
        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x = x/10;
        }
        return (reverse == n);
    }
};
