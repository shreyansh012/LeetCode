class Solution {
public:
    int fib(int n) {
        int start=0;
        int second=1;
        for(int i=0;i<n;i++){
            int sum=second;
            second+=start;
            start=sum;
        }
        return start;
    }
};