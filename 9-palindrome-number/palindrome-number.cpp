class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        long long reversed = 0;
        int temp = x;

        while (temp > 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }

        return reversed == x;
    }
};
