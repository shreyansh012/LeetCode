class Solution {
public:
    bool helper(string s, string t) {
        unordered_map<char,char> umap;
        for(int i=0;i<s.size();i++){
            if(umap.find(s[i])!=umap.end() && umap[s[i]]!=t[i]  )
                return false;
            else umap[s[i]]=t[i];
        }
        return true;
    }
    bool isIsomorphic(string s, string t){
        return helper(s,t) && helper(t,s);
    }
};