class Solution {
public:
    int maxArea(vector<int>& height) {
        int mini=0,maxi=height.size()-1;
        int len=maxi-mini;
        int bw2=min(height[mini],height[maxi]);
        int maxarea=bw2*len;
        while(mini<maxi){
            len=maxi-mini;
            bw2=min(height[mini],height[maxi]);
            int area=bw2*len;
            maxarea=max(maxarea,area);
            if(height[mini]<height[maxi])
                mini++;
            else 
                maxi--;
        }
        return maxarea;
    }
};