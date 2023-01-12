class Solution {
    void dfs(int i, vector<vector<int>> &adjlist, vector<int> &ans, int cnt[], string &labels){
        if(ans[i]==0){
                ans[i]=1;
            for(auto j: adjlist[i]){
                int cnt1[26]={};
                dfs(j,adjlist, ans, cnt1, labels);
                for(int k=0;k<26;k++){
                    cnt[k]+=cnt1[k];
                }
            }
                ans[i]=++cnt[labels[i]-'a'];
        }
    }
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adjlist(n);
        for(auto i:edges){
            adjlist[i[0]].push_back(i[1]);
            adjlist[i[1]].push_back(i[0]);
        }
        vector<int> ans(n);
        int cnt[26]={};
        dfs(0, adjlist, ans, cnt, labels);
        return ans;
    }
};