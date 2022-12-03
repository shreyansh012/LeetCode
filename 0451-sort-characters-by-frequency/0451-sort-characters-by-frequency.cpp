class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(int i=0;i<s.size();i++){
            umap[s[i]]++;
        }
        priority_queue<pair<int,char>> max;
        for(auto i:umap){
            max.push({i.second,i.first});
        }
        s.erase();
        while(!max.empty()){
            // s+=string(max.top().first,max.top().second);
            int n=max.top().first;
            while(n){
                s+=max.top().second;
                n--;
            }
            max.pop();
        }
        return s;
    }
};