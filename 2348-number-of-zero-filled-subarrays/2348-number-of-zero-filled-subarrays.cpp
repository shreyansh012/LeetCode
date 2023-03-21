class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        int n=nums.size(), i=0;
        while(i<n){
            if(nums[i]==0){
                long long ctr=1;
                int j=i+1;
                while(j<n){
                    if(nums[j]==0){
                        ctr++;
                        j++;
                    }
                    else break;
                }
                ans+=(ctr*(ctr+1))>>1;
                i=j;
            }
            else    i++;
        }
        return ans;
    }
};