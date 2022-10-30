class Solution {
    double pow_util(double x,long n){
        if(n==0)
            return 1.0;
        if(x==0)
            return 0;
        if(n<0){
            n=-n;
            x=1/x;
        }
        if(n%2==0)
            return myPow(x*x,n/2);
        else
            return x*myPow(x*x,n/2);
        
    }
public:
    double myPow(double x, int n) {
        return pow_util(x,n);
    }
};