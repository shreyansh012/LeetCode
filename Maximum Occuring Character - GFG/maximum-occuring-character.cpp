//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int> umap;
        for(int i=0;i<str.size();i++){
            umap[str[i]]++;
        }
        int max=INT_MIN;
        char c='z'+1;
        for(auto i:umap){
            //max=(max,i.second);
            if(i.second>max){ 
                
                max=i.second;
                c=i.first;
           
            }
            
        }
        
        return c;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends