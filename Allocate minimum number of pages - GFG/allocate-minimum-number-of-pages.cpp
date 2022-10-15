//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isPossible(int A[],int N,int M,int mid){
        int studentcount=1;
        int sum=0;
        for(int i=0;i<N;i++){
            if(sum+A[i]<=mid){
                sum+=A[i];
            }
            else{
                studentcount++;
                if(studentcount>M || A[i]>mid)
                    {return false;}
                sum=A[i];
                }
            }
        return true;
        }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {   if(N<M){
        return -1;
        }
        int totsum=0;
        for(int i=0;i<N;i++){
            totsum+=A[i];
        }
        int s=0,e=totsum;
        int ans=-1;
        int mid=s+(e-s)/2;
        
        while(s<=e){
            if(isPossible(A,N,M,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends