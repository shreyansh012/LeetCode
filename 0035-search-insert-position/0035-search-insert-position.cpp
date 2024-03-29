class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        int mid=start+((end-start)>>1);
        while(start<=end){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
            mid=start+((end-start)>>1);
        }
        return mid+1;
    }
};