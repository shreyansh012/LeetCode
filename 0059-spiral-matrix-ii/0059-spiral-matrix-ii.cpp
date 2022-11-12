class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int tot=n*n;
        vector<vector<int>> ans(n,vector<int>(n,0));
        int ctr=1;
        int startrow=0;
        int startcol=0;
        int endrow=n-1,endcol=n-1;
        
        while(ctr<=tot){
            for(int i=startcol;i<=endcol && ctr<=tot;i++){
                ans[startrow][i]=ctr++;
            }
            startrow++;
            for(int i=startrow;i<=endrow && ctr<=tot;i++){
                ans[i][endcol]=ctr++;
            }
            endcol--;
            for(int i=endcol;i>=startcol && ctr<=tot;i--){
                ans[endrow][i]=ctr++;
            }
            endrow--;
            for(int i=endrow;i>=startrow && ctr<=tot;i--){
                ans[i][startcol]=ctr++;
            }
            startcol++;
        }
        return ans;
    }
};