class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ctr=0;
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        bool flag=false;
        for(int i=0;i<words.size();i++){
            string x=words[i];
            reverse(x.begin(),x.end());
            if(x!=words[i] && m[x]>0 && m[words[i]]>0){
                ctr+=4;
                m[x]--;
                m[words[i]]--;
            }
            else if(x==words[i] && m[words[i]]>1){
                ctr+=4;
                m[words[i]]-=2;
            }
            else if(x==words[i] && !flag && m[words[i]]>0){
                ctr+=2;
                m[words[i]]--;
                flag=true;
            }
        }
        
        return ctr;
    }
};