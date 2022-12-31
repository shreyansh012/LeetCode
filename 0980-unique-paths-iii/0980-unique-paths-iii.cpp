class Solution {
    bool isSafe(vector<vector<int>> grid, int n, int m, vector<vector<int>> visited, int i, int j){
        if(i<n && i>=0 && j>=0 && j<m && grid[i][j]!=-1 && visited[i][j]!=1)
            return true;
        return false;
    }
    
    void solve(vector<vector<int>> grid, int n, int m, int startrow, int startcol, vector<vector<int>> visited, int &ans){
        //base case
        if(grid[startrow][startcol]==2){
            visited[startrow][startcol]=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j]!=-1 && visited[i][j]!=1){
                        return;    
                    }
                }
            }
            ans++;
            return;
        }
        //base case ended
        visited[startrow][startcol]=1;
        //moving up
        if(isSafe(grid,n,m,visited,startrow-1,startcol)){
            solve(grid, n, m, startrow-1,startcol, visited, ans);
        }
        //moving down
        if(isSafe(grid,n,m,visited,startrow+1,startcol)){
            solve(grid, n, m, startrow+1,startcol, visited, ans);
        }
        //moving right
        if(isSafe(grid,n,m,visited,startrow,startcol+1)){
            solve(grid, n, m, startrow,startcol+1, visited, ans);
        }
        //moving left
        if(isSafe(grid,n,m,visited,startrow,startcol-1)){
            solve(grid, n, m, startrow,startcol-1, visited, ans);
        }
        //backtracking 
        visited[startrow][startcol]=0;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<int> vec(m,0);
        vector<vector<int>> visited(n,vec);
        int startrow,startcol;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    startrow=i;
                    startcol=j;
                    break;
                }
            }
        }
        visited[startrow][startcol]=1;
        solve(grid, n, m, startrow, startcol, visited, ans);
        return ans;
    }
};