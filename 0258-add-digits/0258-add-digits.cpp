class Solution {
    int adddigits(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
public:
    int addDigits(int num) {
        int sum=adddigits(num);
        while(sum>=10){
            sum=adddigits(sum);
        }
        return sum;
    }
};