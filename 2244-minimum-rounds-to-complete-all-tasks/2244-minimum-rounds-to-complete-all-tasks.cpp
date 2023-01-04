class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans=0;
        map<int,int> umap;
        for(int i=0;i<tasks.size();i++){
            umap[tasks[i]]++;
        }
        for(auto i:umap){
            int num=i.second;
            if(num==1)
                return -1;
            ans+=((num+3-1)/3);
            
        }
        return ans;
    }
};