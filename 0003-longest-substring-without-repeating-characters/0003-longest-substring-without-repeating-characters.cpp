class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest=0;
        vector<int> arr(256,-1);
        int l=0,r=0;
        int n=s.size();
        while(r<n){
            if(arr[s[r]]!=-1)
                l=max(arr[s[r]]+1,l);
            
            arr[s[r]]=r;
            longest=max(longest,r-l+1);
            r++;
        }
        return longest;
    }
};