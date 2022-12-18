class Solution {
    bool ispossible(vector<int> piles, int h, int mid){
        int n=piles.size();
        int ctr=0;
        for(int i=0;i<n;i++){
            ctr+=(piles[i]+mid-1)/mid;
            if(ctr>h)
                return false;
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxelement=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            maxelement=max(maxelement,piles[i]);
        }
        int s=1;
        int e=maxelement;
        int mid;
        int ans;
        while(s<=e){
            mid=s+((e-s)>>1);
            if(ispossible(piles,h, mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};