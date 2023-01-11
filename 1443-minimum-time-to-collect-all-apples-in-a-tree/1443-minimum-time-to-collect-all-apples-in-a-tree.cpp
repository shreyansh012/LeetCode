class Solution {
    vector<vector<int>> adjlist;
    int dfs(vector<bool> &hasApple, int currNode, int parent, int dis){
        int disFromChildren=0;
        int disFromRoot=0;
        for(auto x:adjlist[currNode]){
            if(x!=parent){
                disFromRoot=dfs(hasApple, x, currNode, dis+1);
            if(disFromRoot!=0)
                disFromChildren+=disFromRoot-dis;
            }
        }
        return disFromChildren||hasApple[currNode]?disFromChildren+dis:0;
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        adjlist.resize(n);
        for(int i=0;i<edges.size();i++){
            adjlist[edges[i][0]].push_back(edges[i][1]);
            adjlist[edges[i][1]].push_back(edges[i][0]);
        }
        return dfs(hasApple, 0, -1, 0)*2;
    }
};