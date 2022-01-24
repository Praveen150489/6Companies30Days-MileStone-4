// String Amendment

class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string ans="";
        for(int i=0;i<s.length();i++){
            if(i==0){
                if(s[i]>='a' && s[i]<='z'){
                    ans+=s[i];
                }
                else{
                    int x=(s[i]-'A');
                    ans+=('a'+x);
                }
            }
            else if(i!=0 && s[i]>='A' && s[i]<='Z'){
                ans+=' ';
                int x=(s[i]-'A');
                ans+=('a'+x);
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
