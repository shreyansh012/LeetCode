class Solution {
public:
    int countPrimes(int n) {
        vector<bool> ans(n,1);
        int ctr=0;
        
        for(int i=2;i<n;i++){
            if(ans[i]==1)
                
            {   ctr++;
                for(int j=i+i;j<n;j+=i){
                    ans[j]=0;
                }
            }
        }
        
        return ctr;
    }
};