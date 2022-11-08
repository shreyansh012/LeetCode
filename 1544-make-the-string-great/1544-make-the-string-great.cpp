class Solution {
public:
    string makeGood(string s) {
        int i=0;
        int n=s.length()-1;
        while(i<n){
            if((s[i]-s[i+1]==32 || s[i]-s[i+1]==-32)){
                s.erase(i,2);
                if(i>0)
                    i--;
            }
            else i++;
        }
        return s;
    }
};