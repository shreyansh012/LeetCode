class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        //int n=nums.size();
        int arr[100000]={0},ctr;
        for(int i=0;i<nums.size();i++){
           
            arr[nums[i]]++;
        }
        for(int i=0;i<100000;i++){
           // cout<<arr[i];
            if(arr[i]==2)
                res.push_back(i);}
        return res;
    }
};