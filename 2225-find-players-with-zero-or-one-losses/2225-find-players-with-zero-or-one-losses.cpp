class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> winctr,losectr;
        int n=matches.size();
        for(int i=0;i<n;i++){
            winctr[matches[i][0]]++;
            losectr[matches[i][1]]++;
        }
        vector<int> win;
        for(auto i:winctr){
            if(losectr[i.first]==0)
                win.push_back(i.first);
        }
        vector<int> lose;
        for(auto i:losectr){
            if(i.second==1)
                lose.push_back(i.first);
        }
        return {win,lose};
    }
};