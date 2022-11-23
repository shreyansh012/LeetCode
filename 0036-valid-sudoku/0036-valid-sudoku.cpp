class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        //to check all rows for repetition
        for(int i=0;i<n;i++){
            unordered_map<char,int> umap;
            for(int j=0;j<n;j++){
                if(board[i][j]!='.')
                umap[board[i][j]]++;
            }
            for(auto i:umap)
                if(i.second>1)
                    return false;
        }
        //to check all column wise for repetition
        for(int j=0;j<n;j++){
            unordered_map<char,int> umap;
            for(int i=0;i<n;i++){
                if(board[i][j]!='.')
                    umap[board[i][j]]++;
            }
            for(auto i:umap)
                if(i.second>1)
                    return false;
        }
        //to check each 3*3 column
        int sc=0,ec=2,sr=0,er=2;
        while(er<9){
            sc=0,ec=2;
            while(ec<9){
                unordered_map<char,int> umap;
                for(int i=sr;i<=er;i++){
                    for(int j=sc;j<=ec;j++){
                        if(board[i][j]!='.')
                        umap[board[i][j]]++;
                    }
                }
                for(auto i: umap){
                    if(i.second>1)
                        return false;
                }
                sc=ec+1;
                ec+=3;
            }
            sr=er+1;
            er+=3;
        }
     return true;   
    }
};