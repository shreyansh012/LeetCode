class Solution {
    void solve(vector<vector<int>> graph,int n, int start, vector<int> path, vector<vector<int>> &ans){
        if(start==n-1){
            path.push_back(start);
            ans.push_back(path);
            return;
        }
        path.push_back(start);
        for(int i=0;i<graph[start].size();i++){
            solve(graph,n,graph[start][i],path,ans);
        }
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        if(graph[0].size()==0)
            return {};
        vector<vector<int>> ans;
        vector<int> path;
        int n=graph.size();
        solve(graph, n, 0, path, ans);
        return ans;
    }
};