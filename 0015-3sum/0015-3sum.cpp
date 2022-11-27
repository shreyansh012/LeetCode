class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int a=0;a<n-2;){
            int target=0-nums[a];
            int low=a+1;
            int high=n-1;
            while(low<high){
                int sum=nums[low]+nums[high];
                if(sum==target){
                    ans.push_back({nums[a],nums[low],nums[high]});
                    low++;high--;
                    while(nums[low-1]==nums[low] && low<high)
                        low++;
                    while(nums[high+1]==nums[high] && low<high)
                        high--;
                }
                else if(sum>target)
                    high--;
                else low++;
            }
            a++;
            while(nums[a]==nums[a-1] && a<n-2)
                a++;
        }
        return ans;
    }
};