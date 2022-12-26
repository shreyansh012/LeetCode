//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    vector<int> nextSmaller(int *arr, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(s.top()!=-1 && arr[s.top()]>=arr[i])
                s.pop();
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> previousSmaller(int *arr, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(s.top()!=-1 && arr[s.top()]>=arr[i])
                s.pop();
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    int maxareaofhistogram(int *heights, int n){
        int maxarea=INT_MIN;
        vector<int> prev=previousSmaller(heights, n);
        vector<int> next=nextSmaller(heights, n);
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1)
                next[i]=n;
            int b=next[i]-prev[i]-1;
            int newarea=l*b;
            maxarea=max(maxarea, newarea);
        }
        return maxarea;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int rows=n;
        int col=m;
        
        int ans=maxareaofhistogram(M[0], col);
        for(int i=1;i<rows;i++){
            for(int j=0;j<col;j++){
                if(M[i][j]!=0)
                    M[i][j]+=M[i-1][j];
            }
            ans=max(ans, maxareaofhistogram(M[i], col));
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends