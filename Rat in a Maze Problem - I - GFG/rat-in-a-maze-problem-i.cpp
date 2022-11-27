//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    bool issafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> &visited ){
        if(x>=0 && x<n && y>=0 && y<n && visited[x][y]==0 && m[x][y]==1)
            return true;
            
        return false;
    }
    void solve(vector<vector<int>> &m, int n,vector<string> &ans,int x, int y, string path,vector<vector<int>> visited){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        //up
        int xcord=x-1;
        int ycord=y;
        if(issafe(m,n,xcord,ycord,visited)){
            path.push_back('U');
            solve(m,n,ans,xcord,ycord,path,visited);
            path.pop_back();
        }
        //down
        xcord=x+1;
        ycord=y;
        if(issafe(m,n,xcord,ycord,visited)){
            path.push_back('D');
            solve(m,n,ans,xcord,ycord,path,visited);
            path.pop_back();
        }
        //right
        xcord=x;
        ycord=y+1;
        if(issafe(m,n,xcord,ycord,visited)){
            path.push_back('R');
            solve(m,n,ans,xcord,ycord,path,visited);
            path.pop_back();
        }
        //left
        xcord=x;
        ycord=y-1;
        if(issafe(m,n,xcord,ycord,visited)){
            path.push_back('L');
            solve(m,n,ans,xcord,ycord,path,visited);
            path.pop_back();
        }
        
        visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0)
            return ans;
        int x=0,y=0;
        string path="";
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            vector<bool> pusher;
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        solve(m,n,ans,x,y,path,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends