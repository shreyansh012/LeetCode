class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v(nums);
        int n=nums.size();
        for(int i=0;i<n;i++){
            v[(k+i)%n]=nums[i];
        }
        nums=v;
    }
};