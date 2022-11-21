class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size()<=k)
            return s;
        //string ans;
        int n=s.size();
        int iter;
        int digsum=0;
        while(n>k){
            int i=0;
            iter=0;
            while(i<n){
                digsum=0;
                for(int j=0;j<k && i<n;j++){
                    digsum+=s[i]-'0';
                    i++;
                }
                string a=to_string(digsum);
                for(int k=0;k<a.size();k++){
                    s[iter++]=a[k];
                }
            }
            n=iter;
        }
        string ans;
        for(int i=0;i<iter;i++){
            ans+=s[i];
        }
        return ans;
    }
};