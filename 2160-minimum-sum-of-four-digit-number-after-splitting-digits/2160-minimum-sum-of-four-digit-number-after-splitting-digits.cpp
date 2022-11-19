class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        while(num){
            digits.push_back(num%10);
            num/=10;
        }
        int minsum=0;
        sort(digits.begin(),digits.end());
        string s1,s2,s3,s4;
        s1=to_string(digits[0]);
        s4=to_string(digits[3]);
        s3=to_string(digits[2]);
        s2=to_string(digits[1]);
        s1+=s4;
        s2+=s3;
        int n1=stoi(s1);
        int n2=stoi(s2);
        return n1+n2;
    }
};