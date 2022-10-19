class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(carry==0)
                break;
            digits[i]+=carry;
            carry=0;
            if(digits[i]==10){
                carry=1;
                digits[i]=0;
            }
        }
        
        if(carry==1){
            ans.push_back(1);
            for(int i=0;i<digits.size();i++)
                ans.push_back(digits[i]);
        }
        else
            ans=digits;
        
    return ans;
    }
};