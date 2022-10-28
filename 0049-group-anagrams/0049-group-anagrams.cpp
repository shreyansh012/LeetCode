class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==1)
            return {{strs[0]}};
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            vector<string> ss;
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};