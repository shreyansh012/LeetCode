class Solution {
public:
    int maxArea(vector<int>& height) {
        int mini=0,maxi=height.size()-1;
        int len=maxi-mini;
        int breadth=min(height[mini],height[maxi]);
        int maxarea=breadth*len;
        while(mini<maxi){
            len=maxi-mini;
            breadth=min(height[mini],height[maxi]);
            int area=breadth*len;
            maxarea=max(maxarea,area);
            if(height[mini]<height[maxi])
                mini++;
            else 
                maxi--;
        }
        return maxarea;
    }
};