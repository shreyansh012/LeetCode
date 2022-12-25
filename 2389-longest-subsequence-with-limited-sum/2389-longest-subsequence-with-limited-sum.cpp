class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans(queries.size(),0);
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int iter=0;iter<queries.size();iter++){
            int len=0,sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]<=queries[iter]){
                    sum+=nums[i];
                    len++;
                }
                else break;
            }
            ans[iter]=len;
        }
        return ans;
    }
};