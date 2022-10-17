class Solution {
public:
    bool isPalindrome(string s) {
        
        // for(int i=0;i<s.length();i++){
        //     if(s[i]>='A' && s[i]<='Z')
        //         s[i]+=32;
        // }
        // int i=s.length()-1;
        // while(i){
        //     if((s[i]<'a'|| s[i]>'z') && (s[i]<'0' || s[i]>'9'))
        //         s.erase(i,1);
        //         i--;
        // }
        // int j=0,k=s.length()-1;
        // while(j<k){
        //     if(tolower(s[j])!=tolower(s[k]))
        //         return false;
        // }
        int i=0,j=s.length()-1;
        while(i<j){
            if((s[i]>='a'&& s[i]<='z') || (s[i]>='0' && s[i]<='9') || (s[i]>='A' && s[i]<='Z')){
                if((s[j]>='a'&& s[j]<='z') || (s[j]>='0' && s[j]<='9') || (s[j]>='A' && s[j]<='Z')){
                    if(tolower(s[i])!=tolower(s[j]))
                        return false;
                    else i++;j--;
                }
                else
                    j--;
            }
            else i++;
        }
            
        return true;
    }
};