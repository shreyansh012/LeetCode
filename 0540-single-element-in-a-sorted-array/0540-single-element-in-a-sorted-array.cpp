class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int mid=s+((e-s)>>1);
        while(s<e){
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid-1]){
                if(((mid-1-s)&1)==0){
                    s=mid+1;
                }
                else{
                    e=mid-2;
                }
            }
            else{
                if(((e-mid+1)&1)==0){
                    e=mid-1;
                }
                else{
                    s=mid+2;
                }
            }
            mid=s+((e-s)>>1);
        }
       return nums[mid]; 
    }
};