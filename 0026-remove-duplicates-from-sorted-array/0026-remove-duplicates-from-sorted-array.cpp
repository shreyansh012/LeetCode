class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         int k=nums.size();
        
//         for(int i=1;i<k;){
//             if(nums[i]==nums[i-1]){
//                 for(int j=i;j<k-1;j++){
//                     nums[j]=nums[j+1];
//                 }
                    
//                 k--;
//             }
//             else i++;
//         }
//       return k;  
//     }
        map<int,int> ans;
        int k=0;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]+=1;
        }
        int j=0;
        for(auto x:ans){
            nums[j]=x.first;
            j++;
            k++;
        }
        return k;
    }
};