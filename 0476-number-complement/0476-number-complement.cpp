class Solution {
public:
    int bitctr(int num){
        int ctr=0;
        while(num){
            num=num>>1;
            ctr++;
        }
        return ctr;
    }
    int findComplement(int num) {
        int count=bitctr(num);
        int a=1;
        while(count>1){
            a=a<<1;
            a=a|1;
            count--;
        }
        return ~num&a;
    }
};