class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ctr=0;
        unordered_map<string,int> umap;
        for(int i=0;i<words1.size();i++){
            
            umap[words1[i]]++;
            
        }
        for(int i=0;i<words2.size();i++){
            if(umap[words2[i]]<2)
            umap[words2[i]]--;
        }
        
        for(auto i:umap){
            if(i.second==0)
                ctr++;
        }
        return ctr;
    }
};