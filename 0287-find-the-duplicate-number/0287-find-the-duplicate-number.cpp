class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=1,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int ctr=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid)
                    ctr++;
            }
            if(ctr<=mid)
                start=mid+1;
            else end=mid-1;
        }
        return start;
    }
};