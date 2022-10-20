class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int i=0;
        while(i<s.length()){
            for(int j=0;j<t.length();j++){
                if(t[j]==s[i]){
                    t.erase(j,1);
                    break;
                }
            }
            i++;
        }
        if(t.length()==0)
            return true;
        else return false;
    }
};