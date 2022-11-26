class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            int number=target-nums[i];
            if(umap.find(number)!=umap.end()){
                ans.push_back(umap[number]);
                ans.push_back(i);
                break;
            }
            else{
                umap[nums[i]]=i;
            }
        }
        return ans;
    }
};