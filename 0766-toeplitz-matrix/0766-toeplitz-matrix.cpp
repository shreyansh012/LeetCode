class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int r=i+1,c=j+1;
                while(r<m && c<n){
                    if(matrix[i][j]!=matrix[r][c])
                        return false;
                    else{
                        r++;c++;
                    }
                }
            }
        }
        return true;
    }
};