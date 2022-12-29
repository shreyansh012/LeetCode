class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();
        for(int i=0;i<n;i++){
            tasks[i].push_back(i);
        }
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<>> pq;
        sort(tasks.begin(),tasks.end());
        int i=0;
        long t=tasks[0][0];
        while(!pq.empty() || i<n){
            if (pq.empty()) {
                t = max(t, (long)tasks[i][0]);
            }
            while(i<n && tasks[i][0]<=t){
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            int ele= pq.top().second;
            ans.push_back(ele);
            long t2=pq.top().first;
            pq.pop();
            t+=t2;
        }
        return ans;
    }
};