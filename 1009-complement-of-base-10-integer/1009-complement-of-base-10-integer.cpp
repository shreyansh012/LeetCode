class Solution {
public:
    short int countbits(int n){
        short int ctr=0;
        while(n!=0){
            n=n>>1;
            ctr++;
        }
        return ctr;
    }
    int bitwiseComplement(int n) {
        short int count=countbits(n);
        int a=1;
        while(count>1){
            a=a<<1;
            a=(a|1);
            count--;
        }
        return ((~n)&a);
        
    }
};