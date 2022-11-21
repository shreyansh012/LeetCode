class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string,int> umap;
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<n;i++){
                string a;
                while(s1[i]!=' '&& i<n){
                    a+=s1[i++];
                }
            umap[a]++;
        }
        for(int i=0;i<m;i++){
            string a;
            while(s2[i]!=' ' && i<m)
                a+=s2[i++];
            umap[a]++;
        }
        for(auto i: umap){
            if(i.second==1)
                ans.push_back(i.first);
        }
        return ans;
    }
};