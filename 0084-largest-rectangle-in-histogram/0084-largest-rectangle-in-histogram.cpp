class Solution {
    vector<int> nextSmallerElement(vector<int> heights, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(s.top()!=-1 && heights[i]<=heights[s.top()])
                s.pop();
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int> heights, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(s.top()!=-1 && heights[i]<=heights[s.top()])
                s.pop();
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=INT_MIN;
        vector<int> next(n);
        next=nextSmallerElement(heights, n);
        vector<int> prev(n);
        prev=prevSmallerElement(heights, n);
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1)
                next[i]=n;
            int b=next[i]-prev[i]-1;
            int newArea=l*b;
            maxarea=max(maxarea, newArea);
        }
        return maxarea; 
    }
};