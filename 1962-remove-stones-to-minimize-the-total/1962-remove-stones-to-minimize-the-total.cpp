class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum=0;
        for(int i=0;i<piles.size();i++)
            pq.push(piles[i]);
        while(k){
            int ele=pq.top();
            pq.pop();
            ele-=ele/2;
            pq.push(ele);
            k--;
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};