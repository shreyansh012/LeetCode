class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot,s=0,e=nums.size()-1;
        while(s<e){
            pivot=s+(e-s)/2;
            if(nums[pivot]>=nums[0] )
                s=pivot+1;
            else
                e=pivot;
        }
        pivot=s;
        cout<<pivot<<endl;
        int s2,e2;
        if(nums[pivot]==target){
            return pivot;}
        else if(nums[pivot]<=target && target<=nums[nums.size()-1])
        {s2=pivot; e2=nums.size()-1;}
        else
        { s2=0;e2=pivot-1;  }
        
        while(s2<=e2){
            int mid2=s2+(e2-s2)/2;
            if(nums[mid2]==target)
                return mid2;
            else if(target>nums[mid2])
                s2=mid2+1;
            else
                e2=mid2-1;
        }
       return -1;
        
    }
};