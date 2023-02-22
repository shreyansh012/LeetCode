class Solution {
    bool ispossible(vector<int> &weights, int days, int limit){
        int sum=0, i=0, n=weights.size();
        while(i<n && days){
            sum=0;
            while(i<n && (sum+weights[i])<=limit ){
                sum+=weights[i++];
            }
            days--;
        }
        if(i!=n)    return false;
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s=INT_MIN,e=0;
        for(auto i:weights){
            s=max(s, i);
            e+=i;
        }
        int ans=INT_MAX, mid=s+((e-s)>>1);
        while(s<=e){
            if(ispossible(weights, days, mid)){
                ans=min(ans, mid);
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+((e-s)>>1);
        }
        return ans;
    }
};