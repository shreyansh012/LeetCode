class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a=0;
        int i=32;
        while(i){
            a=a<<1;
            if(n&1){
                a=a|1;
                cout<<"1";
            }
            else{
                cout<<"0";}
            n=n>>1;
            i--;
        }

        cout<<endl;
        return a;
    }
};