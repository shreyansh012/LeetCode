class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int unique=0;
        int n=nums.size();
        int num=1;
        for(int i=0;i<n;i++){
            unique=unique^num++;
            unique=unique^nums[i];
        }
        return unique;
    }
};