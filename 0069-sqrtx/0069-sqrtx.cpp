class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        int s=1,e=x/2,ans=1;
        long long mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if((mid*mid)==x)
                return mid;
            else if((mid*mid)>x)
                e=mid-1;
            else
            {   ans=mid;
                s=mid+1;}
        }
        return ans;
    }
};