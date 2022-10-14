class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid!=arr.size()-1 && mid>=0 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                return mid;
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
                start=mid;
            else end=mid;
        }
       return -1; 
    }
};