class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        int n1=word1.size();
        int n2=word2.size();
        map<char,int> umap1,umap2;
        for(int i=0;i<n1;i++){
            umap1[word1[i]]++;
            umap2[word2[i]]++;
        }
        vector<int> vec1,vec2;
        for(auto i:umap1){
            if(umap2.find(i.first)==umap2.end())
                return false;
            vec1.push_back(i.second);
        }
        for(auto i:umap2){
            if(umap1.find(i.first)==umap1.end())
                return false;
            vec2.push_back(i.second);
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        for(int i=0;i<vec1.size();i++){
            if(vec1[i]!=vec2[i])
                return false;
        }
        return true;
    }
};