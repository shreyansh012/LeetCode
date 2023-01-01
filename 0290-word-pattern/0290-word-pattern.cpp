class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> umap;
        int j=0;
        int m=s.size();
        int n=pattern.size();
        for(int i=0;i<n;i++){
            string a;
            while(j<m && s[j]!=' '){
                a.push_back(s[j]);
                j++;
            }
            if(j<m && s[j]==' ')
                j++;
            if(umap[pattern[i]]==""){
                bool flag=0;
                for(auto k:umap){
                    if(k.second==a)
                        flag=1;
                }
                if(!flag)
                    umap[pattern[i]]=a;
                else
                    return false;
            }
            if(umap[pattern[i]]!="" && umap[pattern[i]]!=a){
                return false;
            }
        }
        if(j!=m)
            return false;
        return true;
    }
};