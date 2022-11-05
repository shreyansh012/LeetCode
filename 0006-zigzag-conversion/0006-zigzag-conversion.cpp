class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> st(numRows,"");
        int i=0;
        int n=s.size();
        while(i<n){
            for(int j=0;j<numRows && i<n;j++){
                st[j].push_back(s[i++]);
            }
            for(int k=numRows-2;k>=1 && i<n;k--){
                st[k].push_back(s[i++]);
            }
        }
        string ans="";
        for(auto i:st){
            ans+=i;
        }
        return ans;
    }
};