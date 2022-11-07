class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int count=0;
        int tot=n*m;
        n=n-1;
        m=m-1;
        int startr=0,startc=0;
        while(count<tot){
            for(int i=startc;count<tot && i<=n;i++){
                ans.push_back(matrix[startr][i]);
                count++;
            }
            startr++;
            for(int i=startr;count<tot && i<=m;i++){
                ans.push_back(matrix[i][n]);
                count++;
            }
            n--;
            for(int i=n;count<tot && i>=startc;i--){
                ans.push_back(matrix[m][i]);
                count++;
            }
            m--;
            for(int i=m;count<tot && i>=startr;i--){
                ans.push_back(matrix[i][startc]);
                count++;
            }
            startc++;
        }
        return ans;
    }
};