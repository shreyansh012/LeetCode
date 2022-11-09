class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int col=n-1;
        int row=0;
        while(row<m && col>-1){
            if(matrix[row][col]==target)
                return 1;
            else if(matrix[row][col]<target)
                row++;
            else col--;
        }
        return 0;
    }
};