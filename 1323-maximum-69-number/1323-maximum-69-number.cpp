class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        int digits=-1;
        while(n){
            digits++;
            n/=10;
        }
        
        int mult=pow(10,digits);
        int carry=0;
        n=num;
        while(mult){
            if((n/mult)==6){
                n+=(mult*3);
                    return carry+n;
            }
            else{
             carry+=(9*mult);
                n=n-(9*mult);
                mult/=10;
            }
        }
       return num; 
    }
};