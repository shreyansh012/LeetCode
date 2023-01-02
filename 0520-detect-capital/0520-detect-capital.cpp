class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        if(isupper(word[0]) && islower(word[1])){
            for(int j=2;j<n;j++){
                if(isupper(word[j]))
                    return false;
            }
        }
        else if(isupper(word[0])){
            for(int j=1;j<n;j++){
                if(!isupper(word[j]))
                    return false;
            }
        }
        else if(islower(word[0])){
            for(int j=1;j<n;j++){
                if(!islower(word[j]))
                    return false;
            }
        }
        return true;
    }
};