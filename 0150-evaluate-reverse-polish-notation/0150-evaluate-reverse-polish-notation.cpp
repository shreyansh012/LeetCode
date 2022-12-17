class Solution {
    long long calculate(long long a, long long b, string op){
        long long ans;
        if(op=="+"){
            return b+a;
        }
        else if(op=="-"){
            return b-a;
        }
        else if(op=="*"){
            return b*a;
        }
        else{
            return b/a;
        }
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                long long a=s.top();
                s.pop();
                long b=s.top();
                s.pop();
                long long ans=calculate(a,b,tokens[i]);
                s.push(ans);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
       return (int)s.top();
    }
};