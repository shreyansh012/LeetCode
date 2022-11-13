class Solution {
    void reverse(string &s,int s1,int e1){
        int start=s1,end=e1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
public:
    string reverseWords(string s) {
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]==' '&& s[i+1]==' '){
                s.erase(i,1);
                i--;
            }
        }
        if(s[0]==' '){
            s.erase(0,1);
        }
        n=s.size();
        if(s[n-1]==' ')
            s.erase(n-1,1);
        reverse(s,0,s.size()-1);
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s,start,i-1);
                start=i+1;
            }
            else if(i==s.size()-1){
                reverse(s,start,i);
            }
        }
        
       return s; 
    }
};