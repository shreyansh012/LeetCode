class Solution {
    int finddigitssquare(int m){
        int sum=0;
        while(m){
            int dig=m%10;
            sum+=(dig*dig);
            m/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        int sum=finddigitssquare(n);
        while(sum!=1){
            if(umap[sum]!=0)
                break;
            umap[sum]++;
            sum=finddigitssquare(sum);
        }
        if(sum==1)
            return true;
        return false;
    }
};