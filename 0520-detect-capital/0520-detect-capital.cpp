class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        if(isupper(word[0]) && isupper(word[1])){
            for(int j=2;j<n;j++){
                if(islower (word[j]))
                    return false;
            }
        }
        else{
            for(int j=1;j<n;j++){
                if(!islower(word[j]))
                    return false;
            }
        }
        return true;
    }
};