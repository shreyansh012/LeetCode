class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int n=a.size(),m=b.size();
        int carry=0;
        int i=n-1,j=m-1;
        while(i>=0 && j>=0){
            if(a[i]=='0' && b[j]=='0'){
                if(carry){
                    carry=0;
                    s+="1";
                }
                else{
                    s+="0";
                }
            }
            else if(a[i]=='0' || b[j]=='0'){
                if(carry){
                    carry=1;
                    s+="0";
                }
                else{
                    s+="1";
                }
            }
            else{
                if(carry){
                    s+="1";
                    carry=1;
                }
                else{
                    carry=1;
                    s+="0";
                }
            }
            i--;
            j--;
        }
        while(i>=0){
            if(a[i]=='0'){
                if(carry){
                    carry=0;
                    s+="1";
                }
                else{
                    s+="0";
                }
            }
            else{
                if(carry){
                    s+="0";
                }
                else{
                    s+="1";
                }
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='0'){
                if(carry){
                    carry=0;
                    s+="1";
                }
                else{
                    s+="0";
                }
            }
            else{
                if(carry){
                    s+="0";
                }
                else{
                    s+="1";
                }
            }
            j--;
        }
        if(carry){
            s+="1";
        }
        reverse(s.begin(),s.end());
        return s;
    }
};