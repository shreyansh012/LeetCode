class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> vec;
        int n=profits.size();
        for(int i=0;i<n;i++){
            vec.push_back({capital[i], profits[i]});
        }
        sort(vec.begin(), vec.end());
        priority_queue<int> p;
        int i=0;
        while(k){
            while(i<n && vec[i].first<=w){
                p.push(vec[i].second);
                i++;
            }
            if(p.empty())
                break;
            w+=p.top();
            p.pop();
            k--;
        }
        return w;
    }
};