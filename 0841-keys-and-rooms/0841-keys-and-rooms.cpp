class Solution {
public:
    void dfs(vector<vector<int>> &rooms, int i, vector<bool> &visited){
        for(auto j:rooms[i]){
            if(!visited[j]){
                visited[j]=1;
                dfs(rooms, j, visited);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,0);
        visited[0]=1;
        dfs(rooms, 0, visited);
        for(auto b:visited)
            if(!b)
                return false;
        return true;
    }
};