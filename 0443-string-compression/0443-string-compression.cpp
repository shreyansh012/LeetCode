class Solution {
    string countpushnum(int count){
        string s="";
        while(count){
            int num=count%10;
            s.push_back(num+'0');
            count/=10;
        }
        reverse(s.begin(),s.end());
        return s;
    }
public:
    int compress(vector<char>& chars) {
        string s;
        //int len=1;
        s+=chars[0];
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                int count=2;
                while(i<chars.size()-1 && chars[i]==chars[i+1]){
                    count++;
                    i++;
                }
                if(count<10)
                    s.push_back(count+48);
                else
                    s+=countpushnum(count);
            }
            else{
                s.push_back(chars[i]);

            }
        }

        for(int i=0;i<s.length();i++){
            chars[i]=s[i];
        }


        return s.length();
    }
};