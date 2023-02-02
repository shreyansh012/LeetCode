class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> umap;
        int ctr=1;
        for(auto i:order){
            umap[i]=ctr++;
        }
        for(int i=0;i<words.size()-1;i++){
            int j=0,k=0;
            while(j<words[i].size() && k<words[i+1].size()){
                if(words[i][j]==words[i+1][k]){
                    j++;
                    k++;
                    continue;
                }
                else if(umap[words[i][j]]<umap[words[i+1][k]]){
                    break;
                }
                else {
                    return false;
                }
            }
            if(j!=words[i].size() && k==words[i+1].size())
                return false;
        }
        return true;
    }
};