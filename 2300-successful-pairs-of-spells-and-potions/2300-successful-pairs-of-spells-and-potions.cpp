class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            int s=0, e=m-1;
            int mid=s+((e-s)>>1);
            while(s<=e){
                long long prod = (long long)potions[mid]*(long long)spells[i];
                if(prod >= success)
                    e=mid-1;
                else
                    s=mid+1;
                mid=s+((e-s)>>1);
            }
            ans[i]=m-s;
        }
        return ans;
    }
};