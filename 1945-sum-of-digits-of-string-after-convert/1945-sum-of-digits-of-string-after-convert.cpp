class Solution {
public:
    int getLucky(string s, int k) {
        string ans;
        for(int i=0;i<s.size();i++){
            ans+=to_string(s[i]-96);
        }
        
        int an;
        while(k){
            an=0;
            for(int i=0;i<ans.size();i++)
            {
                an+=ans[i]-'0';
            }
            ans=to_string(an);
            k--;
        }
       return an; 
    }
};