//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool isPossible(int arr[],int n,int k,long long mid){
        int ctr=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                ctr++;
                if(ctr>k || arr[i]>mid)
                    return false;
                sum=arr[i];
            }
        }
        return true;
    }
    
    long long minTime(int arr[], int n, int k){
    //     if(n<k){
    //     return -1;
    //     }
        long long s=0,e,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        e=sum;
        long long ans=-1;
        long long mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(arr,n,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
            
            mid=s+(e-s)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends