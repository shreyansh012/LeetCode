class Solution {
public:
    double average(vector<int>& salary) {
        int mini = INT_MAX, maxi = INT_MIN, n = salary.size();
        double sum = 0;
        for(int i=0;i<n;i++){
            mini = min(mini, salary[i]);
            maxi = max(maxi, salary[i]);
            sum += salary[i];
        }
        return (sum-maxi-mini)/(n-2);
    }
};