class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> empty;
        for(int i=0;i<capacity.size();i++){
            empty.push_back(capacity[i]-rocks[i]);
        }
        int ans=0;
        sort(empty.begin(),empty.end());
        for(int i=0;i<empty.size();i++){
            // while(empty[i]>0 && additionalRocks){
            //     additionalRocks--;
            //     empty[i]--;
            // }
            if(empty[i]==0){
                ans++;
                continue;
            }
            if(empty[i]>0 && additionalRocks){
                if(additionalRocks>=empty[i]){
                    additionalRocks-=empty[i];
                    empty[i]=0;
                    ans++;
                }
                else break;
            }
        }
        
        return ans;
    }
};