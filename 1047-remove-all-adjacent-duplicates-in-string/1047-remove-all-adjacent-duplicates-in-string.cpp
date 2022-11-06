class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if((i-1)>0)
                i-=2;
                else i=-1;
            }
        }
      return s;  
    }
};