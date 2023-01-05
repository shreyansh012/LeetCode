class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1) return 1;
        sort(points.begin(),points.end());
        int ans=0,i=1;
        int upperbound=points[0][1];
        while(i<n){
            ans++;
            while(i<n && points[i][0]<=upperbound){
                upperbound=min(upperbound,points[i][1]);
                i++;
            }
            if(i<n)
                upperbound=points[i][1];
        }
        return ans;
    }
};