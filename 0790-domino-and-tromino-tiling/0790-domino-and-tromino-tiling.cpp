class Solution {
public:
    int numTilings(int n) {
        if(n==1 || n==2)
            return n;
        long long sum=5;
        long long now=2;
        long long prev=1;
        long mod=1e9+7;
        for(int i=3;i<n;i++){
            int temp=now;
            now=sum;
            sum=((sum*2)%mod+(prev%mod))%mod;
            prev=temp;
        }

        return (int)(sum%mod);
    }
};