class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0,rem,ctr=0;
        unordered_map<int,int> umap;
        umap[0]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)   rem+=k;
            
            if(umap.find(rem)!=umap.end())
                ctr+=umap[rem];
            
            umap[rem]++;
        }
        return ctr;
    }
};