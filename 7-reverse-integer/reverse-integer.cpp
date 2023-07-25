class Solution {
public:
    int reverse(int n) {
        long long int rev = 0;
        int last;
        while(n != 0){
            last = n % 10;
            rev = (rev*10)+last; 
            n = n /10;
        }

        return(rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
        // string str = to_string(n);
        // reverse(str.begin(), str.end());
        // int x = stoi(str);
        // return x; 
    }
};
