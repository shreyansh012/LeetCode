class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int mult=1024;
        for(int i=n;i<nums.size();i++){
            nums[i]=(nums[i]*mult)+nums[i-n];
        }
        int ctr=0;
        for(int i=n;i<nums.size();i++,ctr+=2){
            nums[ctr]=nums[i]%mult;
            nums[ctr+1]=nums[i]/mult;
        }
        return nums;
    }
};