class Solution {
public:
    int reverse(int x) {
        int rev_num=0;
        int digit;
        while(x != 0){
            digit= x%10;
            x=x/10;
            // Check for overflow
            if(rev_num>INT_MAX/10 || (rev_num==INT_MAX/10 && digit>7))
                return 0;
            // Check for underflow
            if (rev_num<INT_MIN/10 || (rev_num==INT_MIN/10 && digit<-8))
                return 0;
            rev_num= rev_num*10 + digit;
        }
        return rev_num;
    }
};