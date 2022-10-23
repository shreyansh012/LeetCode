class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)
            return;
        int j=0,ctr=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0 ){
                nums[j++]=nums[i];
                if(ctr){
                nums[i]=0;
                    //ctr--;
                }
            }
            else 
                ctr++;
        }
    
    }
};