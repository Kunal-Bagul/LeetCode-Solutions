class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers are never palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        // Reverse only half
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // Even digits: x == rev
        // Odd digits: x == rev / 10
        return x == rev || x == rev / 10;
    }
};