class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        a+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==a.back()){
                a.pop_back();
            }
            else
                a.push_back(s[i]);
        }
        return a;
    }
};