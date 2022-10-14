class Solution {
public:
    int firstocc(vector<int>&nums, int target){
        
        int s=0,e=nums.size()-1,firstans=-1;
        int mid=s+((e-s)/2);
        while(s<=e){
            
            if(nums[mid]==target){
                firstans=mid;
                e=mid-1;
            }
                
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
            
            mid=s+((e-s)/2);
        }
        return firstans;
    }
    int lastocc(vector<int> &nums,int target){
         int s=0,e=nums.size()-1,lastans=-1;
        int mid=s+((e-s)/2);
        while(s<=e){
            
            if(nums[mid]==target){
                lastans=mid;
                s=mid+1;
            }
                
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
            
            mid=s+((e-s)/2);
        }
        return lastans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        arr.push_back(firstocc(nums,target));
        arr.push_back(lastocc(nums,target));
        
        return arr;
    }
};