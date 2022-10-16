class Solution {
public:
    int lengthOfLastWord(string s) {
        int ctr=0;
        int i=s.length()-1;
        if(s[i]==' ')
            while(s[i]==' ' && i>=0){
                s.erase(i,1);
                i--;}
        cout<<s<<endl;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ')
                break;
            ctr++;
        }
        return ctr;
    }
};