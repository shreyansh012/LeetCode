class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative_ctr = 0;
        for(auto i: nums){
            if(i==0)
                return 0;
            if(i<0)
                negative_ctr++;
        }
        if(negative_ctr&1)
            return -1;
        return 1;
    }
};