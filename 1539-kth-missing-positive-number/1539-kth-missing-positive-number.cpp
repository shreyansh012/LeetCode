class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing=1, i=0;
        while(i<arr.size()){
            if(arr[i]==missing){
                i++;
            }
            else{
                k--;
                if(k==0)
                    return missing;
            }
                missing++;
        }
        return missing+k-1;
    }
};