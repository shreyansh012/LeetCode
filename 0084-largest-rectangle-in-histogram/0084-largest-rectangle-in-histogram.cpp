//Love babbar lecture 56
class Solution {
    vector<int> nextSmaller(vector<int> arr,int n){
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
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next=nextSmaller(heights,n);
        vector<int> prev=previousSmaller(heights,n);
        int maxarea=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1)         //this statement means that no next element is smaller hence we can
                next[i]=n;          //     take all the elements when we are considering the area
            int b=next[i]-prev[i]-1;
            int newarea=l*b;
            maxarea=max(maxarea,newarea);
        }
        return maxarea;
    }
};