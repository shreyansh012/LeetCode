class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0;
        int pivot=0;
        for(int i=0;i<nums.size();i++){
            rsum+=nums[i];
        }
        for(pivot=0;pivot<nums.size();pivot++){
                rsum-=nums[pivot];
            if(rsum==lsum)
                return pivot;
            
                lsum+=nums[pivot];
                //pivot++;
            
        }
        
        
        
       return -1; 
    }
};