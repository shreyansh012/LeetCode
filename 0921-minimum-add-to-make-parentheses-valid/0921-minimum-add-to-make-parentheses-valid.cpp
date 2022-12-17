class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int ctr=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')' && !st.empty() && st.top()=='(')
                st.pop();
            else
                st.push(s[i]);
        }
        while(!st.empty()){
            ctr++;
            st.pop();
        }
        return ctr;
    }
};