class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int ans=0;
        long long minavg=INT_MAX;
        long long sum=0,avg;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];   
        }
        long long digsum=0;
        for(int i=0;i<nums.size()-1;i++){
            digsum+=nums[i];
            sum-=nums[i];
            avg=(digsum/(i+1))-(sum/(nums.size()-(i+1)));
            avg=abs(avg);
            if(avg<minavg){
                minavg=avg;
                ans=i;
            }
        }
        digsum+=nums[nums.size()-1];
        avg=digsum/nums.size();
        if(avg<minavg){
                minavg=avg;
                ans=nums.size()-1;
            }
        return ans;
    }
};