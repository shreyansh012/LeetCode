class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        int numsize=nums.size();
        for(int i=0;i<numsize-1;i++){
            for(int j=i+1;j<numsize;j++){
                if(nums[i]+nums[j]==target){
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
        }
     return arr;   
    }
};