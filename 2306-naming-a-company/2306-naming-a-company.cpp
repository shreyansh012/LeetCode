class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long ans=0;
        unordered_set<string> s[26];
        for(auto &i:ideas){
            s[i[0]-'a'].insert(i.substr(1));
        }
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                long long num1=0,num2=0;
                for(auto &c:s[i]){
                    if(s[j].find(c)==s[j].end()) num1++;
                }
                for(auto &c:s[j]){
                    if(s[i].find(c)==s[i].end()) num2++;
                }
                ans+=num1*num2;
            }
        }
        return ans*2;
    }
};