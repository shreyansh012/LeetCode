class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]+=1;
        }
        for(auto x:ans){
            if(x.second>=2)
                return true;
        }
        
        return false;
    }
};