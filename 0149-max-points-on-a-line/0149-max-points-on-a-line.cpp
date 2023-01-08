class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n<=2) return n;
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_map<double,int> umap;
            double x1=points[i][0];
            double y1=points[i][1];
            for(int j=0;j<n;j++){
                if(j==i) continue;
                double slope;
                double x2=points[j][0];
                double y2=points[j][1];
                if(x2-x1==0)
                    slope=INT_MAX;
                else 
                    slope=(y2-y1)/(x2-x1);
                umap[slope]++;
                ans=max(ans,umap[slope]);
            }  
        }
        return ans+1;
    }
};