class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int len=0;
        while(i<chars.size()){
            int j=i+1;
            while(j<chars.size() && chars[i]==chars[j]){
                j++;
            }
            chars[len++]=chars[i];
            int num=j-i;
            if(num>1){
            
                string s=to_string(num);
                for(auto k:s){
                    chars[len++]=k;
                }
            }
            i=j;
        }
        return len;
    }
};