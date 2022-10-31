class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    if((i-1)<0 || grid[i-1][j]==0)
                        peri++;
                    if((i+1)>=m || grid[i+1][j]==0)
                        peri++;
                    if((j-1)<0 || grid[i][j-1]==0)
                        peri++;
                    if((j+1)>=n || grid[i][j+1]==0)
                        peri++;
                }
            }
        }
        return peri;
    }
};