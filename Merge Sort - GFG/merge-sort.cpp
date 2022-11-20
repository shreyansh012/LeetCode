//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[],int s,int e){
    int mid=s+((e-s)>>1);
    int l1=mid-s+1;
    int l2=e-mid;

    int arr1[l1],arr2[l2];
    int k=s;
    for(int i=0;i<l1;i++){
        arr1[i]=arr[k++];
    }
    for(int i=0;i<l2;i++){
        arr2[i]=arr[k++];
    }

    int i=0,j=0;
    k=s;
    while(i<l1 && j<l2){
        if(arr1[i]<arr2[j])
            arr[k++]=arr1[i++];
        else 
            arr[k++]=arr2[j++];
    }

    while(i<l1)
        arr[k++]=arr1[i++];
    
    while(i<l2)
        arr[k++]=arr2[j++];

}

void mergeSort(int *arr,int s,int e){
    if(s>=e)
        return;
    int mid=s+((e-s)>>1);
    //left half
    mergeSort(arr,s,mid);
    //right half
    mergeSort(arr,mid+1,e);
    //merge both
    merge(arr,s,e);
}
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends