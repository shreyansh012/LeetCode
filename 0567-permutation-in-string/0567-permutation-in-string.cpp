class Solution {
    bool checkper(string s2,int i,int j,int arr[26]){
        int arr2[26]={0};
        for(int k=i;k<=j;k++){
            arr2[s2[k]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=arr2[i])
                return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int arr[26]={0};
        for(int i=0;i<s1.size();i++){
            arr[(s1[i]-'a')]++;
        }
        
        for(int i=0;i<s2.size();i++){
            int j=i+s1.length()-1;
            if(j<s2.size()){
                if(checkper(s2,i,j,arr))
                    return true;
            }
            
        }
        return false;
    }
};