class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ctr=0, n=people.size();
        sort(people.begin(), people.end());
        int s=0, e=n-1;
        while(s<=e){
            if(people[s]+people[e]<=limit){
                ctr++;
                s++;
                e--;
            }
            else{
                ctr++;
                e--;
            }
        }
        return ctr;
    }
};