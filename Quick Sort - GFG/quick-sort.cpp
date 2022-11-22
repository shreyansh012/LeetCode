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
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int s, int e)
    {   //base case for recursion
        if(s>=e)
        return;

        int p=partition(arr,s,e);
        //recursive call for the left part of the pivot
        quickSort(arr, s, p-1);
        //recursive call for the right part of the pivot
        quickSort(arr,p+1,e);
    }
    
    public:
    int partition (int arr[], int s, int e)
    {
        int pivot=arr[s];
        int ctr=0;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivot)
                ctr++;
        }
        int pivotIndex=s+ctr;
        swap(arr[s],arr[pivotIndex]);
        //now all the left elements of the pivot should be less than the pivot 
        //and all the right elements from the pivot should be greater than pivot
        int i=s,j=e;
        while(i < pivotIndex && j > pivotIndex){
            while(arr[i]<=pivot)
                i++;
            while(arr[j]>pivot)
                j--;
            if(i < pivotIndex && j > pivotIndex)
                swap(arr[i++],arr[j--]);
        }
        return pivotIndex;
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends