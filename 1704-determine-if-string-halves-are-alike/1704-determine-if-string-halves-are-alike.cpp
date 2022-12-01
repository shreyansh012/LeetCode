class Solution {
    bool iswovel(char a){
        return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U');
    }
public:
    bool halvesAreAlike(string s) {
        int wovctr1=0;
        int wovctr2=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i<n/2 && iswovel(s[i]))
                wovctr1++;
            else if(i>=n/2 && iswovel(s[i]))
                wovctr2++;
        }
        return wovctr1==wovctr2;
    }
};