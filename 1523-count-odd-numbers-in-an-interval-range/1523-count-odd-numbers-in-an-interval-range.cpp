class Solution {
public:
    int countOdds(int low, int high) {
        if(low&1 && high&1){
            return 1+((high-low)/2);
        }
        else if(low&1 || high&1){
            return 1+((high-low)/2);
        }
        else
            return ((high-low)+2-1)/2;
    }
};