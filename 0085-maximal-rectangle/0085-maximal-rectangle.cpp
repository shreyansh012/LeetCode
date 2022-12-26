class Solution {
    vector<int> nextSmaller(vector<int> arr, int n){
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
    vector<int> previousSmaller(vector<int> arr, int n){
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
    
    int maxareaofhistogram(vector<int> heights, int n){
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> matrix1;
        for(int i=0;i<rows;i++){
            vector<int> a;
            for(int j=0;j<col;j++){
                a.push_back(matrix[i][j]-'0');
            }
            matrix1.push_back(a);
        }
        int ans=maxareaofhistogram(matrix1[0], col);
        for(int i=1;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix1[i][j]!=0)
                    matrix1[i][j]+=matrix1[i-1][j];
            }
            ans=max(ans, maxareaofhistogram(matrix1[i], col));
        }
        return ans;
    }
};