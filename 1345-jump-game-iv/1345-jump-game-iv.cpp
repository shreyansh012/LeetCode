class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int, vector<int>> umap;
        for(int i=0;i<n;i++){
            umap[arr[i]].push_back(i);
        }
        vector<bool> visited(n);
        visited[0]=1;
        queue<int> q;
        q.push(0);
        int ans=0;
        while(!q.empty()){
            for(int size=q.size(); size>0; size--){
                int i=q.front();
                q.pop();
                if(i==n-1)  return ans;
                vector<int>& next=umap[arr[i]];
                next.push_back(i-1);next.push_back(i+1);
                for(int j:next){
                    if(j>=0 && j<n && !visited[j]){
                        visited[j]=true;
                        q.push(j);
                    }
                }
                umap[arr[i]].clear();
            }
            ans++;
        }
        return 0;
    }
};