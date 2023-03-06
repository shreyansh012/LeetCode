class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing=1;
        int i=0;
        while(i<arr.size()){
            if(arr[i]==missing){
                missing++;
                i++;
            }
            else{
                k--;
                if(k==0){
                    return missing;
                }
                missing++;
            }
        }
        if(k){
            return missing+k-1;
        }
        return -1;
    }
};