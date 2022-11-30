class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int i=0;
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int ctr=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                ans.push_back(ctr);
                ctr=1;
            }
            else ctr++;
        }
        ans.push_back(ctr);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1])
                return false;
        }
        return true;
    }
};