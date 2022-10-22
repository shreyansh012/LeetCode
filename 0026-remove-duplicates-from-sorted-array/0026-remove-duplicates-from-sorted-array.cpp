class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> ans;
        int k=0;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]+=1;
        }
        int j=0;
        for(auto x:ans){
            nums[j]=x.first;
            j++;
            k++;
        }
        return k;
    }
};