class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        long long trip=0, l=1, r=1e14;
        int n=time.size();
        while(l<=r){
            trip=0;
            long long mid=l+((r-l)/2);
            for(auto i:time){
                trip+=(mid/i);
            }
            if(trip>=totalTrips){
                r=mid-1;
            }
            else
                l=mid+1;
        }
       return l; 
    }
};