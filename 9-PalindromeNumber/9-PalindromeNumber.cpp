// Last updated: 6/5/2025, 11:50:22 AM
class Solution {
public:
    bool isPalindrome(long long x) {
        if ( x < 0){
            return false;
        }
        
        long long original=x;
        long long rev=0;

        while ( x!=0){
            long long digit = x % 10;
            rev = (rev*10) + digit;
            x = x/10;
        }

        return original == rev;
    }
};