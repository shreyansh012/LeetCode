class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size(),i=0;
        while(i<n){
            if((i+m-1)<n && haystack[i]==needle[0] && haystack[i+m-1]==needle[m-1]){
                bool flag=1;
                int iter=i+1;
                for(int j=1;j<m;j++){
                    if(needle[j]!=haystack[iter]){
                        flag=0;
                        break;
                    }
                    else    iter++;
                }
                if(flag)
                    return i;
            }
            i++;
        }
        return -1;
    }
};