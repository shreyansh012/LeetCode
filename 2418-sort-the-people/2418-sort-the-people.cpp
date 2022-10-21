class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<int,string,greater<int>> a;
        for(int i=0;i<heights.size();i++){
            
            a[heights[i]]=names[i];
        }
        
        for(auto x:a)
            ans.push_back(x.second);
        return ans;
    }
};