class Solution {
public:
    string removeOccurrences(string s, string part) {
        int delchars=part.size();
        for(int i=0;i<s.length();i++){
            
            if(s[i]==part[0]){
                int j=1;
                bool flag=0;
                while(j<delchars){
                    if(s[i+j]!=part[j]){
                        flag=1;
                        break;}
                    
                    j++;
                }
                if(!flag){
                    //cout<<"deleting from "<<i<<" to "<<i+delchars<<endl;
                    s.erase(i,delchars);
                    i=-1;
                }
            }
        }
        return s;
    }
};