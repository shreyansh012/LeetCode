//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    bool solve(int *nums, int n, int start){
        if(start==n-1)
            return true;
        while(nums[start]){
            if(start+nums[start]<n && solve(nums,n,start+nums[start]))
                return true;
            else nums[start]--;
        }
        return false;
    }
  public:
    int canReach(int A[], int N) {
        return solve(A, N, 0);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends