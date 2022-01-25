// Implement Atoi

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans=0;
        bool flag=false;
        for(int i=0;i<str.length();i++){
            if(i==0 && str[i]=='-'){
                flag=true;
            }
            else if(str[i]>='0' && str[i]<='9'){
                ans=ans*10 + (str[i]-'0');
            }
            else{
                return -1;
            }
        }
        if(flag==true){
            ans=0-ans;
        }
        return ans;
    }
};
