class Solution {
public:
    bool check(vector<int>& nums) {
        int rotate=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
            if(nums[i]<nums[i-1])
                rotate++;
        
        if(nums[n-1]>nums[0])
            rotate++;
        
        return rotate<=1;
    }
};