class Solution {
    bool isPali(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++,j--;
        }
        return true;
    }
    void solve(string s, int index, int n, vector<string> &path, vector<vector<string>> &ans){
        if(index==n){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<n;i++){
            if(isPali(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                solve(s, i+1, n, path, ans);
                path.pop_back();
            }
        }
        
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        int n=s.length(), i=0;
        solve(s, i, n, path, ans);
        return ans;
    }
};