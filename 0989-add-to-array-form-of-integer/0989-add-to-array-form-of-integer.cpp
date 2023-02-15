class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        int i=num.size()-1;
        while(k && i>=0){
            int number=k%10;
            int num1=num[i]+number+carry;
            num[i]=(num1)%10;
            carry=num1/10;
            k/=10;
            i--;
        }
        if(k)
        {
            vector<int> a;
             while(k){
                int number=k%10;
                int num1=(number+carry);
                a.push_back(num1%10);
                carry=num1/10;
                k/=10;
            }
            if(carry){
                a.push_back(carry);
            }
            reverse(a.begin(),a.end());
            for(auto i:num){
                a.push_back(i);
            }
             return a;
        }
        if(carry && i>=0){
            while(i>=0 && carry){
                
                int num1=num[i]+carry;
                num[i]=(num1)%10;
                carry=num1/10;
                i--; 
            }
        }
        if(carry){
            vector<int> a;
            a.push_back(carry);
            for(auto i:num){
            a.push_back(i);
        }
         return a;
            
        }
        return num;
        
    }
};