class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n-1;j++){
                if(matrix[i][j]!=-1)
                {int r=i+1,c=j+1;
                while(r<m && c<n){
                    if(matrix[i][j]!=matrix[r][c])
                        return false;
                    else{
                        matrix[r][c]=-1;
                        r++;c++;
                    }
                }
                matrix[i][j]=-1;
            }}
        }
        return true;
    }
};