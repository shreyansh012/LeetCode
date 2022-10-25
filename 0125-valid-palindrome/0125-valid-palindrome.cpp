class Solution {
public:
    bool isPalindrome(string s) {
        int st=0,e=s.size()-1;
    while(st<=e){
        if(isalnum(s[st]) && isalnum(s[e])){
            //cout<<s[st]<< " & "<<s[e]<<endl;
            if(tolower(s[st])!=tolower(s[e]))
                return false;
            else {
                st++;e--;
            }
        }
        else if(isalnum(s[st])){
            e--;
        }
        else if(isalnum(s[e])){
            st++;
        }
        else {st++;e--;}
            
    }
    return true;
    }
};