//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    long long merge(long long arr[], long long s,long long mid, long long e){
        long long ctr=0;
        //long long mid=s+((e-s)>>1);
        long long l1=mid-s+1;
        long long l2=e-mid;
        
        long long *arr1=new long long[l1];
        long long *arr2=new long long[l2];
        long long k=s;
        for(int i=0;i<l1;i++){
            arr1[i]=arr[k++];
        }
        //k=mid+1;
        for(int i=0;i<l2;i++){
            arr2[i]=arr[k++];
        }
        int i=0,j=0;
        k=s;
        while(i<l1 && j<l2){
            if(arr1[i]<=arr2[j])
                arr[k++]=arr1[i++];
            else
                {arr[k++]=arr2[j++];
                ctr+=l1-i;
                }
        }
        while(i<l1){
            arr[k++]=arr1[i++];
        }
        while(j<l2){
            arr[k++]=arr2[j++];
        }
        
        delete []arr1;
        delete []arr2;
        return ctr;
    }
    
    long long mergesort(long long arr[],long long s,long long e){
        if(s>=e)
            return 0;
        long long ctr=0;    
        int mid=s+((e-s)>>1);
        ctr+=mergesort(arr,s,mid);
        ctr+=mergesort(arr,mid+1,e);
        
        ctr+=merge(arr,s,mid,e);
        return ctr;
    }
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        long long ans=mergesort(arr,0,N-1);
        
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends