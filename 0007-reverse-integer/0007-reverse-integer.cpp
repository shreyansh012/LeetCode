class Solution {
public:
    int reverse(int x) {
        int rem,rev=0;
        //bool flag=0;
        
        while(x){
            rem=x%10;
            if((rev>INT_MAX/10) || (rev<INT_MIN/10))
                return 0;
            rev=rev*10+rem;
            x/=10;
        }
        //if(flag)
        //return -rev;
        
        return rev;
    }
};