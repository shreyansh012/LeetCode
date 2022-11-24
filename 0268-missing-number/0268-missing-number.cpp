class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int unique=0;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            unique=unique^i;
        }
        for(int i=0;i<n;i++){
            unique=unique^nums[i];
        }
        return unique;
    }
};