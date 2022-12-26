//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int N) 
    {
        for(int i=0;i<N;i++){
            bool flag=0;
            for(int j=0;j<N;j++)
                if(M[i][j]==1){
                    flag=1;break;
                }
            if(flag)continue;
            bool flag2=1;
            for(int j=0;j<N;j++){
                if(j!=i && M[j][i]!=1){
                    flag2=0;
                    break;
                }
            }
            if(flag2)
                return i;
        } 
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends