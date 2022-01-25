// .Generate all combinations of well-formed(balanced) parentheses.

class Solution
{
    public:
    vector<string> AllParenthesis(int n)
    {
        // Your code goes here
        vector<string> ans;
        int open=n;
        int close=n;
        string str="";
        int l=2*n;
        solve(ans,str,open,close,l);
        return ans;
    }
    void solve(vector<string>& ans,string str,int open,int close,int l){
        if(open==0 && close==0 && str.length()==l){
            ans.push_back(str);
            return;
        }
        if(open>0){
            solve(ans,str+'(',open-1,close,l);
        }
        if(close>open){
            solve(ans,str+')',open,close-1,l);
        }
    }
};
