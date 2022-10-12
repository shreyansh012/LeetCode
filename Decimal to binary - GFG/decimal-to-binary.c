//{ Driver Code Starts
//Initial Template for C


#include <stdio.h>

// } Driver Code Ends
//User function Template for C

void toBinary(int N)
{
    if(N==0){
        return;}
    toBinary(N/2);
    printf("%d",N%2);
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	
	
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    
	    toBinary(n);
	    printf("\n");
	}
	return 0;
}
// } Driver Code Ends