class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        int minsum=INT_MAX;
        
        sort(nums.begin(),nums.end());
        for(int a=0;a<n;a++){
            //int mini=target-a;
            int low=a+1;
            int high=n-1;
            while(low<high){
                int sum=(nums[low]+nums[high]+nums[a]);
                if(sum==target)
                    return target;
                else if(abs(sum-target)<minsum ){
                    ans=sum;
                    minsum=abs(sum-target);
                }
                
                if(sum>target)
                    high--;
                else low++;
            }
        }
        return ans;
    }
};