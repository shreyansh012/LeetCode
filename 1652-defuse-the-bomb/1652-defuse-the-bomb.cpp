class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        if(k==0){
            for(int i=0;i<code.size();i++)
                code[i]=0;
            return code;
        }
        else if(k>0){
            vector<int> ans;
            int n=code.size();
            for(int i=0;i<n;i++){
                int j=(i+1)%n;
                int sum=0;
                for(int iter=0;iter<k;iter++){
                    sum+=code[j];
                    j++;
                    j=j%n;
                }
                ans.push_back(sum);
            }
            return ans;
        }
        else{   vector<int> ans;
                int n=code.size();
                for(int i=0;i<n;i++){
                    int j=i-1;
                    if(j<0)
                        {j=n-abs((j)%n);}
                    int sum=0;
                    for(int iter=0;iter>k;iter--){
                        sum+=code[j];
                        j--;
                        if(j<0)
                            j=n-abs((j)%n);
                    }
                    ans.push_back(sum);
                }
            return ans;
        }
        
    }
};