class Solution {
public:
    bool isPalindrome(int n) {
        int x = n;

        long int rev = 0;
        int last;

        if( n < 0 || n >= INT_MAX)
            return false;

        while(n !=0 ){
            last = n % 10;
            rev = rev * 10 + last;
            if(rev > INT_MAX)
                return false;
            n = n / 10;
        } 

        if( rev == x){
            return true;
        }else{
            return false;
        }
    }
};