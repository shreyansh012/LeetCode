class Solution {
    int dfs(int node, int parent, vector<vector<int>> &adjlist, int &ans, string &s){
        int maxpath=1;
            
        for(auto x:adjlist[node]){
            if(x!=parent){
                int temp=dfs(x,node,adjlist, ans, s);
                if(s[node]!=s[x]){
                    ans=max(ans,maxpath+temp);
                    maxpath=max(maxpath, 1+temp);
                }
            }
        }
        return maxpath;
    }
public:
    int longestPath(vector<int>& parent, string s) {
        int n=parent.size();
        vector<vector<int>> adjlist(n);
        for(int i=1;i<n;i++){
            adjlist[parent[i]].push_back(i);
            adjlist[i].push_back(parent[i]);
        }
        int ans=1;
        dfs(0, -1, adjlist, ans, s);
        return ans;
    }
};